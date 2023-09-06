#include<bits/stdc++.h>
using namespace std;

int findSubstring(string str)
{
  int n = str.length();
  int cnt = 0;
  for (int i = 1; i < n; i++)
  {
    if (str[i] != str[i - 1])
    {
      cnt++;
    }
  }
  return cnt;
}

int main()
{
  string str = "abcabcbb";
  cout << findSubstring(str) << endl;

}