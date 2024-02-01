//find leftmost repeating character in given string

#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256 ;

//naive approach to solve this problem 
/* O(n^2)
int leftMost(string s)
{
    int n = s.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                return i;
            }
        }
    }
    return -1; // Return -1 if no repeating character is found
}
*/
//better approach to solve this problem 
/*
int leftMost(string s)
{
  int count[CHAR] = {0} ;
  for(int i = 0 ; i < s.length(); i++)
  {
    count[s[i]]++ ;
  }
  for(int i = 0 ; i < CHAR ; i++)
  {
    cout<<count[s[i]]<<endl;
    if(count[s[i]] > 1)
    {
      return i ;
    }
  }
  return -1 ;
}
*/

//optimization of better approach 
int leftMost(string s)
{
  int fIndex[CHAR] ;
  int res = INT_MAX ;

  fill(fIndex,fIndex+CHAR,-1);

  for(int i = 0 ; i < s.length(); i++)
  {
    int fi = fIndex[s[i]] ;
    if(fi == -1)
    {
      fIndex[s[i]] = i ;
    }
    else{
      res = min(fi,res) ;
    }
  }
}

int main()
{
    string s = "geeksforgeeks";
    int ans = leftMost(s);
    if (ans != -1)
    {
        cout << "Leftmost repeating character index: " << ans << endl;
        cout << "Leftmost repeating character: " << s[ans] << endl;
    }
    else
    {
        cout << "No repeating character found." << endl;
    }

    return 0;
}
