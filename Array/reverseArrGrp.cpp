#include <iostream>
#include <vector>
using namespace std ;
class Solution {
public:
  // Function to reverse every sub-array group of size k.
  void reverseInGroups(std::vector<long long>& arr, int n, int k) {
    for (int i = 0; i < n; i += k) {
      std::cout<<"start = "<<i<<endl;
      int start = i;
      int end = std::min(n - 1, start + k - 1);
      while (start < end) {
        std::swap(arr[start++], arr[end--]);
      }
        std::cout<<" after reversing start = "<<start<<endl;
    }
  }
};

int main() {
  // Example usage of the Solution class
  Solution solution;

  // Sample input vector
  std::vector<long long> arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
  int n = arr.size();
  int k = 3; // Group size

  // Calling the reverseInGroups function
  solution.reverseInGroups(arr, n, k);

  // Output the modified vector
  std::cout << "Modified Array after reversing groups of size " << k << ":\n";
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
