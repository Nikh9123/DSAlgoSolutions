#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
  if (s.length() != t.length()) return false;
  map<char, char>mapChar;

  //loop to a string
  for (int i = 0; i < s.length(); i++)
  {
    if (mapChar.find(s[i]) != mapChar.end())
    {
      char mapped = mapChar[s[i]];
      if (mapped != t[i])
      {
        return false;
      }
    }
    else if (mapChar.find(s[i]) == mapChar.end())
    {
      for (auto pair : mapChar)
      {
        //if the t's string char is already mapped with another char
        
        if (pair.second == t[i])
        {
          cout << pair.second << endl;
          return false;
        }
      }
        mapChar[s[i]] = t[i];
    }
  }
  return true;

}
int main()
{
  string s1 = "foo";
  string s2 = "bar";
  if (isIsomorphic(s1, s2))
    cout << "The strings are isomorphic." << endl;
  else
    cout << "The strings are not isomorphic." << endl;

  return 0;
}