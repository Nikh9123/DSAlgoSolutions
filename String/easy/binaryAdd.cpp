#include<bits/stdc++.h>
using namespace std;

/**@https://leetcode.com/problems/add-binary/
 * Given two binary strings a and b, return their sum as a binary string.



Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 *
*/
class Solution {
public:
  string addBinary(string binary1, string binary2) {
    int index1 = binary1.length() - 1; // Start from the end of the first binary string
    int index2 = binary2.length() - 1; // Start from the end of the second binary string
    int carry = 0; // Initialize carry to 0
    string result = ""; // Initialize result string

    // While there are still digits in either binary string
    while (index1 >= 0 || index2 >= 0) {
      int sum = carry; // Start with the carry from the last addition

      // If there are still digits in the first binary string, add it to the sum
      if (index1 >= 0) {
        sum += binary1[index1] - '0'; // Subtract '0' to convert from char to int
        index1--; // Move to the next digit in binary1
      }

      // If there are still digits in the second binary string, add it to the sum
      if (index2 >= 0) {
        sum += binary2[index2] - '0'; // Subtract '0' to convert from char to int
        index2--; // Move to the next digit in binary2
      }

      // Add the least significant digit of the sum to the result
      result += to_string(sum % 2);
      // Update carry with the most significant digit of the sum
      carry = sum / 2;
    }

    // If there is still a carry after adding all digits, add it to the result
    if (carry != 0) {
      result += to_string(carry);
    }

    // The result is currently in reverse order, so reverse it
    reverse(result.begin(), result.end());

    // Return the result
    return result;
  }
};

int main() {
  string binary1 = "1010";
  string binary2 = "1011";
  Solution solution;
  cout << solution.addBinary(binary1, binary2) << endl; // Print the result
  return 0;
}