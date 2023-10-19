#include<bits/stdc++.h>
using namespace std;

/*
bool checkRotation(string s, string t)
{
  char str;
  int n = t.length();
  int j = 0;
  while (j < n)
  {
    str = t[0];
    for (int i = 0; i < n - 1; i++)
    {
      t[i] = t[i + 1];
    }
    j++;
    t[n - 1] = str;
    if (s == t)
    {
      return true;
    }
  }
  return false;
}
*/

// This function takes two input strings, s and goal, and checks if goal can be obtained
// by rotating the string s.
bool checkRotation(string s, string goal) {

  // Check if the length of the input strings s and goal is the same.
  if (s.length() == goal.length() && ((s + s).find(goal) != string::npos)) { //
    // If the lengths are equal and goal is found in the concatenated string s+s,
    // then goal can be obtained by rotating the string s. Return true.
    
    return true;
  }
  // If the conditions are not met, return false, indicating goal cannot be obtained
  // by rotating the string s.
  return false;
}



int main()
{
  string s = "abcde";
  string goal = "cdeab";
  bool ans = checkRotation(s, goal);
  cout << ans << endl;
}