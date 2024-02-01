/*
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

*/

#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

//basic solution
// bool anagram(string s , string t)
// {
// sort(s.begin(), s.end());
// sort(t.begin(),t.end());
// return s==t ;
// }

bool anagram(string s, string t)
{
  if (s.length() != t.length())
  {
    return false;
  }
  //intializing count array elements with all 0 value
  int count[CHAR] = { 0 };

  for (int i = 0; i < s.length(); i++)
  {
    count[s[i]]++;
    count[t[i]]--;
  }
  for (int i = 0; i < CHAR; i++)
  {
    if (count[i] != 0)
    {
      return false;
    }
  }
  return true;

}
int main()
{
  string s = "bababa";
  string t = "aaabbb";

  if (anagram(s, t))
  {
    cout << "string : <" << s << "> and <" << t << "> is an anagaram." << endl;
  }
  else {
    cout << "string : " << s << " and " << t << " is not an anagaram" << endl;

  }
}