//problem link -> https://leetcode.com/problems/palindromic-substrings/description/?envType=daily-question&envId=2024-02-10
/*
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.



Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

*/


#include<bits/stdc++.h>
using namespace std;


class Solution {
  private :
  bool isPalindrome(string &str, int i , int j) {
      if(j < i){
          return true ;
      }

      if(str[i] == str[j]){
          return isPalindrome(str, i+1, j-1) ;
      }
      return false ;
  }

public:

  //time complexity -> O(n^3) cheking again and again same subsequence
  int countSubstrings(string s) {
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
      for (int j = i; j < s.length(); j++) {
        if (isPalindrome(s, i, j)) {
          cnt++;
        }
      }
    }
    return cnt;
  }



};

int main() {
  string s = "aaa";

  Solution obj;

  cout << obj.countSubstrings(s) << endl;
}