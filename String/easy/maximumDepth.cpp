/**
 * @https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
 * 
 * Example 1:

Input: s = "(1+(2*3)+((8)/4))+1"
Output: 3
Explanation: Digit 8 is inside of 3 nested parentheses in the string.
Example 2:

Input: s = "(1)+((2))+(((3)))"
Output: 3
*/

#include<bits/stdc++.h>
using namespace std ;

int maxDepth(string s) {
        int cnt = 0, maxCnt = 0 ;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(')
            {
                cnt++ ;
            }
            else if(s[i] == ')')
            {
                cnt-- ;
            }
            maxCnt = max(maxCnt , cnt) ;
        }
        return maxCnt ;
    }

int main()
{
string s = "(1+(2*3)+((8)/4))+1" ;
cout<<"maximum depth is = "<<maxDepth(s)<<endl;
}