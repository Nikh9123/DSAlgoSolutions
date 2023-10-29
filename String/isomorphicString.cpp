#include<bits/stdc++.h>
using namespace std;

// Function to check if two strings are isomorphic
bool isIsomorphic(string s, string t) {
    // If the lengths of the strings are different, they can't be isomorphic
    if (s.length() != t.length()) return false;

    // Create a mapping of characters from string s to string t
    map<char, char> charMap;

    // Iterate through each character in the strings
    for (int i = 0; i < s.length(); i++) {
        // If the character from s is already mapped to another character in t
        if (charMap.find(s[i]) != charMap.end()) {
            // Check if the mapped character is different from the current character in t
            char mappedChar = charMap[s[i]];
            if (mappedChar != t[i]) {
                // If different, strings are not isomorphic
                return false;
            }
        } else {
            // If the character from s is not yet mapped, check if the character from t
            // is already mapped to another character in s (one-to-one mapping constraint)
            for (auto pair : charMap) {
                if (pair.second == t[i]) {
                    // If the character in t is already mapped, strings are not isomorphic
                    return false;
                }
            }
            // Add a new mapping for the current characters in s and t
            charMap[s[i]] = t[i];
        }
    }
    // If all characters are successfully mapped, strings are isomorphic
    return true;
}

int main() {
    // Example strings
    string s = "bar";
    string t = "foo";

    // Check if the strings are isomorphic
    bool ans = isIsomorphic(s, t);

    // Output the result based on the isomorphism check
    if (ans) {
        cout << "Yes! Both strings are isomorphic." << endl;
    } else {
        cout << "No! Both strings are not isomorphic." << endl;
    }

    return 0;
}
