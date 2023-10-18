/*
//* Given the maximum occurrences of a, b, and c in a string.
//*Your task is to make the string containing only a, b, and c such that
*no three consecutive characters are the same.If the resultant string equals to a + b + c, return the length(a + b + c) otherwise - 1.

*                                                                                                                                                                                                                                     Example 1 :

*    Input : a = 3,b = 3, c = 3
*    Output : 9
*    Explanation : No three consecutive character of the string "abcabcabc" is same.
     Example 2 :

*     Input : a = 11,b = 2, c = 2
*     Output : -1
*     Explanation : If we build a string of these character's, the string will be "aabaacaabaacaaa", here we can see that there will be three consecutive a.So there is no solution exist.int main()
*/
using namespace std;
#include <bits/stdc++.h>

int solve(int a, int b, int c)
{
  // code here
  if (a >= b + c)
  {
    int m = b + c;
    if (2 * (m + 1) < a)
    {
      return -1;
    }
  }

  if (b >= c + a)
  {
    int m = a + c;
    if (2 * (m + 1) < b)
    {
      return -1;
    }
  }
  if (c >= a + b)
  {
    int m = a + b;
    if (2 * (m + 1) < c)
    {
      return -1;
    }
  }
  return a + b + c;
}
int main()
{
  int a = 11, b = 2, c = 2;
  cout << solve(a, b, c);
}