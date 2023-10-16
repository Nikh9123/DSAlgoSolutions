#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;

/*
return first character which is unique
char leftMostNonRepeating(string s)
{
  int count[CHAR] = {0} ;
  int n = s.length() ;
  for(int i = 0 ; i < n ; i++)
  {
    count[s[i]]++ ;
  }
  for(int i = 0 ; i < n ; i++)
  {
    if(count[s[i]] == 1)
    {
      return s[i];
    }
  }
  return 'q';
}
*/

//return first character index which is unique
int leftMostNonRepeating(string s)
{
  int fi[CHAR];
  fill(fi, fi + CHAR, -1);


  for (int i = 0; i < s.length(); i++)
  {
    if (fi[s[i]] == -1)
    {
      //store index of element in fi[s[i]] position if s[i] = 'a' whose ascii value = 97 then it will store thier index of a  
      fi[s[i]] = i;
    }
    else {
      fi[s[i]] = -2;
    }
  }
  int res = INT_MAX;
  for (int i = 0; i < CHAR; i++)
  {
    if (fi[i] >= 0)
    {
      res = min(res, fi[i]);
    }

  }
  return (res != INT_MAX) ? res : -1;
}

int main()
{
  string s = "leetcode";
  int index = leftMostNonRepeating(s);
  if (index != -1) {
    cout << "The index of the first non-repeating character: " << index << endl;
    cout << "The character is: " << s[index] << endl;
  }
  else {
    cout << "No non-repeating character found in the string." << endl;
  }
}