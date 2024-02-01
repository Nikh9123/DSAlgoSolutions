#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

// this function will remove the outer paranthesis from the string
  string removeOuterParentheses(string s) {
    int cnt = 0;
    bool flag = true;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '(')
      {
        cnt++;
      }
      else if (s[i] == ')')
      {
        cnt--;
      }
      if (cnt == 1 && flag == true) // if the cnt is 1 and flag is true, then it is the first outer paranthesis '(' and we'll ignore it
      {
        flag = false;
        continue;
      }
      else if (cnt == 0 && flag == false)// if the cnt is 0 and flag is false, then it is the last outer paranthesis ')' and we'll ignore it
      {
        flag = true;
        continue;
      }
      ans += s[i];
    }
    return ans;

  }
};

int main()
{
  Solution s;
  string str = "(()())(())";
  cout << s.removeOuterParentheses(str);
  return 0;
}
/*
&dry run :
flag = true 
(()())(()) => i = 0 , cnt = 1 ,flag = true then it is the first outer most paranthesis  '('  , so we have to ignore it and make flag = false
              i = 1 , cnt = 2 , flag = false and it is '(' not the first outer most paranthesis so we have to add it to ans = (
              i = 2 , cnt = 1 , flag = false and it is ')' not the first outer most paranthesis so we have to add it to ans = ()
              i = 3 , cnt = 2 , flag = false and it is ')' not the first outer or neither thr last most paranthesis so we have to add it to ans = ()(
              i = 4 , cnt = 1 , flag - false and it is the first paranthesis but not the outer most paranthesis so we have to add it to ans = ()() 
              i = 5 , cnt = 0 , and  flag = false and it is the outer last paranthesis so we have to ignore it 
              i = 6 , cnt = 1 , flag = true and it is the first outer most paranthesis so we have to ignore it and make flag = false
              i = 7 , cnt = 2 , flag = false and it is '(' not the first outer most paranthesis so we have to add it to ans = ()()(
              i = 8 , cnt = 1 , flag = false and it is ')' not the first outer most paranthesis so we have to add it to ans = ()()()
              return ans = ()()() 
              

*/