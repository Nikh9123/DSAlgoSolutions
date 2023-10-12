//@https://leetcode.com/problems/valid-palindrome/description/
/**Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
  for (int i = 0; i < s.length(); i++)
  {
    if (isalpha(s[i]) || isdigit(s[i]))
    {
      if (isupper(s[i]))
      {
        s[i] = tolower(s[i]);
      }

    }
    else {
      s.erase(s.begin() + i);
      i--; // to check double ,, or spaces
    }
  }
  string rev = s;
  reverse(rev.begin(), rev.end());
  return s == rev;
}

int main()
{
  string s = "A man, a plan, a canal: Panama";
  if (isPalindrome(s))
  {
    cout << "string is palindrome" << endl;
  }
  else {
    cout << "not palindrome";
  }
}