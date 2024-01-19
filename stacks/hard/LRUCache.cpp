#include<bits/stdc++.h>
using namespace std;

class LRUCache {
  int size;
  vector<pair<int, int>> lru; //store the key and value
public:
  LRUCache(int capacity) {
    this->size = capacity;
    lru.reserve(size);
  }

  int get(int key) {
    int ans = -1;
    bool flag = false;
    //find the key in lru if found then return the value and keep this element to the last of lru else return -1
    for (int i = 0; i < lru.size(); i++) {

      if (key == lru[i].first) {

        ans = lru[i].second;
        lru.erase(lru.begin() + i);
        lru.push_back({ key, ans });
        break;
      }
    }
    return ans;
  }

  void put(int key, int value) {
    cout << "printing lru : " << endl;
    for (auto x : lru) {
      cout << x.first << " " << x.second << endl;
    }
    //if key is already present then update the value and keep this element to the last of lru
    for (int i = 0; i < lru.size(); i++) {
      if (key == lru[i].first) {
        lru[i].second = value;
        lru.erase(lru.begin() + i);
        lru.push_back({ key, value });
        return;
      }
    }
    if (lru.size() < size) {
      lru.push_back({ key, value });// this is element which is most recently used 
    }
    else {
      lru.erase(lru.begin());
      lru.push_back({ key, value });
    }
  }
};


int main() {

  LRUCache l = LRUCache(2);

  l.put(1, 1);
  l.put(2, 2);
  cout << l.get(1) << endl; // returns 1
  l.put(3, 3); // evicts key 2
  cout << l.get(2) << endl; // returns -1 (not found)
  l.put(4, 4); // evicts key 1
  cout << l.get(1) << endl; // returns -1 (not found)
  cout << l.get(3) << endl; // returns 3
  cout << l.get(4) << endl; // returns 4

  return 0;
}