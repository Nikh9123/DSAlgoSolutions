#include <iostream>
#include <deque>

class LRUCache {
private:
  std::deque<std::pair<int, int>> cache;  // Deque to store key-value pairs
  int capacity;  // Maximum capacity of the cache

public:
  LRUCache(int capacity) : capacity(capacity) {}

  int get(int key) {
    // Search for the key linearly in the deque
    for (auto it = cache.begin(); it != cache.end(); ++it) {
      if (it->first == key) {
        // Move the key-value pair to the front of the deque (recently used)
        std::pair<int, int> keyValue = *it;
        cache.erase(it);
        cache.push_front(keyValue);
        return keyValue.second;
      }
    }
    return -1;  // Key not found in the cache
  }

  void put(int key, int value) {
    // Check if the cache has reached its capacity
    if (cache.size() == capacity) {
      // Evict the least recently used item (back of the deque)
      cache.pop_back();
    }

    // Add the new key-value pair to the front of the deque
    cache.push_front({ key, value });
  }
};

int main() {
  LRUCache lruCache(2);

  lruCache.put(1, 1);
  lruCache.put(2, 2);

  std::cout << lruCache.get(1) << std::endl; // Output: 1
  lruCache.put(3, 3); // evicts key 2
  std::cout << lruCache.get(2) << std::endl; // Output: -1 (not found)
  lruCache.put(4, 4); // evicts key 1
  std::cout << lruCache.get(1) << std::endl; // Output: -1 (not found)
  std::cout << lruCache.get(3) << std::endl; // Output: 3
  std::cout << lruCache.get(4) << std::endl; // Output: 4

  return 0;
}
