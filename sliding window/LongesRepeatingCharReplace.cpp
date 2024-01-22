#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int getMaxFreq(map<char, int>& countOccurence) {
    int maxi = INT_MIN;
    for (auto& it : countOccurence) {
      if (it.second > maxi) {
        maxi = it.second;
      }
    }
    return maxi;
  }

  int characterReplacement(string s, int k) {
    // count occurrence of every char in string using hashmap ;
    map<char, int> countOccurence;
    int maxLen = 0, len = 0, left = 0, n = s.length(), maxFreq = 0;

    for (int right = 0; right < n; right++) {
      // if s[right] element found in map then increase count
      countOccurence[s[right]]++;
      len = right - left + 1;
      int currentFreq = countOccurence[s[right]];  // Get the frequency of the current character
      cout << "currentFreq: " << currentFreq << endl;
      maxFreq = getMaxFreq(countOccurence);
      cout << "maxFreq: " << maxFreq << endl;
      while ((len - maxFreq) > k) {
        countOccurence[s[left]]--;
        left++;
        len = right - left + 1;
      }
      maxLen = max(maxLen, len);
    }
    return maxLen;
  }
};


int main() {
  string s = "AABABBA";
  int k = 1;
  Solution sol;
  cout << sol.characterReplacement(s, k) << endl;
}