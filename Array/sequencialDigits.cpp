#include<bits/stdc++.h>
using namespace std;
/**
 * An integer has sequential digits if and only if each digit in the number is one more than the previous digit.

Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.



Example 1:

Input: low = 100, high = 300
Output: [123,234]
Example 2:

Input: low = 1000, high = 13000
Output: [1234,2345,3456,4567,5678,6789,12345]
*/
class Solution {
public:
  vector<int> sequentialDigits(int low, int high) {
    vector<int> res; // Initialize the result vector
    queue<int> q; // Initialize a queue to hold the sequential digits

    // Push the digits 1 through 9 into the queue
    for (int i = 1; i < 9; ++i) {
      q.push(i);
    }

    // While the queue is not empty
    while (!q.empty()) {
      int curr = q.front(); // Get the front element of the queue
      q.pop(); // Remove the front element from the queue

      // If the current number is within the range [low, high]
      if (curr >= low && curr <= high) {
        res.push_back(curr); // Add it to the result vector
      }

      // If the current number is greater than high, break the loop
      if (curr > high) break;

      int last_digit = curr % 10; // Get the last digit of the current number

      // If the last digit is less than 9
      if (last_digit < 9) {
        // Generate the next sequential digit number and push it into the queue
        int next_num = curr * 10 + (last_digit + 1);
        q.push(next_num);
      }
    }

    // Return the result vector
    return res;
  }
};


int main() {
  int low = 1000, high = 13000;
  Solution s;
  for (auto v : s.sequentialDigits(low, high)) {
    cout << v << " ";
  }
  cout << endl;
}