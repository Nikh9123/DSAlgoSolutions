/*@https://leetcode.com/problems/longest-palindromic-substring/description/


Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:

Input: s = "cbbd"
Output: "bb"
*/

#include <iostream>
#include <string>

class Solution {
public:
    /**
     * Function to find the longest palindrome substring in the given string.
     * @param S Input string
     * @return Longest palindrome substring
     */
    std::string longestPalindrome(std::string S) {
        int start = 0;  // Start index of the longest palindrome found so far
        int maxLen = 1; // Length of the longest palindrome found so far
        
        // Iterate through the string to find palindromes
        for (int i = 1; i < S.length(); i++) {
            // Expand around the center for even-length palindromes
            int l = i - 1;
            int r = i;
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }

            // Expand around the center for odd-length palindromes
            l = i - 1;
            r = i + 1;
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }

        // Return the longest palindrome substring using start index and max length
        return S.substr(start, maxLen);
    }
};

int main() {
    // Example usage of the Solution class
    Solution solution;
    std::string input = "babad";
    std::string result = solution.longestPalindrome(input);
    std::cout << "Longest Palindrome Substring: " << result << std::endl;

    return 0;
}
