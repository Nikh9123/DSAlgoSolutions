#include<bits/stdc++.h>
using namespace std;

// Function to find the length of the longest substring without repeating characters
int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxLength = 0;
    vector<int> charIndex(128, -1); // Initialize an array to store character indices, assuming ASCII characters

    int left = 0; // Initialize the left pointer for the sliding window of the unique characters

    for (int right = 0; right < n; right++) {
        // If the current character has occurred within the current substring
        if (charIndex[s[right]] >= left) {
            // Move the left pointer to the next position after the repeating occurrence of the character
            left = charIndex[s[right]] + 1;
        }
        // Update the index of the current character in the charIndex array
        charIndex[s[right]] = right;

        // Update the maxLength by calculating the length of the current substring
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    // Example input string
    string s = "abcabcbb";

    // Call the function and output the result
    int maxLength = lengthOfLongestSubstring(s);
    cout << "Length of the longest substring without repeating characters: " << maxLength << endl;

    return 0;
}
