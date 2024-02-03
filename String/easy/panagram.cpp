#include<bits/stdc++.h>
using namespace std ;

/*
@https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Function to check if the given sentence is a pangram
    bool checkIfPangram(string sentence) {
        // Array to store the count of each alphabet letter, initialized with zeros
        int arr[26] = {0};

        // Loop through each character in the sentence
        for (int i = 0; i < sentence.length(); i++) {
            // Subtract 'a' to get the correct index in the array for each alphabet letter
            arr[sentence[i] - 'a']++;
        }

        // Check if all letters are present at least once
        for (int i = 0; i < 26; i++) {
            // If any letter is missing, return false
            if (arr[i] == 0) {
                return false;
            }
        }

        // If all letters are present, return true
        return true;
    }
};

int main() {
    // Example sentence
    string exampleSentence = "thequickbrownfoxjumpsoverthelazydog";

    // Create an instance of the Solution class
    Solution solution;

    // Call the checkIfPangram function and store the result
    bool result = solution.checkIfPangram(exampleSentence);

    // Output the result
    if (result) {
        cout << "The sentence is a pangram." << endl;
    } else {
        cout << "The sentence is not a pangram." << endl;
    }

    return 0;
}
