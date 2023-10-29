#include<bits/stdc++.h>
using namespace std;

vector<int>patterSearch(string text, string pattern)
{
  int n = text.length();//length of the text
  int m = pattern.length(); //length of pattern

  for (int i = 0; i < n - m + 1; i++)// n-m+1 is for the length of text from where we can search the pattern
  {
    int j;
    for (j = 0; j < m; j++)
    {
      if (pattern[j] != text[i + j]) // text[i+j] is for searching pattern in text like if i is at 0 then i+j will search the pattern one by one 
      {
        break;
      }
    }
    if (j == m)
    {
      return { i , i+j-1 };
    }
  }
  return { -1,-1 };
}

int main()
{
  string txt = "AAAAAA";
  string pattern = "AA";
  vector<int>ans = patterSearch(txt, pattern);
  cout << " pattern found at index : ";
  for (auto x : ans)
  {
    cout << x << " ";
  }
  cout << endl;
}