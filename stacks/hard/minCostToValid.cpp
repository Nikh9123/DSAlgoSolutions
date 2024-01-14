/**
 * Problem statement
Ninja has been given a string ‘STR’ containing either ‘{’ or ‘}’. 'STR’ is called valid if all the brackets are balanced. 
Formally for each opening bracket, there must be a closing bracket right to it.

For Example:
“{}{}”, “{{}}”, “{{}{}}” are valid strings while “}{}”, “{}}{{}”, “{{}}}{“ are not valid strings.
Ninja wants to make ‘STR’ valid by performing some operations on it. In one operation, he can convert ‘{’ into ‘}’ or vice versa,
 and the cost of one such operation is 1.

Your task is to help Ninja determine the minimum cost to make ‘STR’ valid.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  string s = "{{}}";
  stack<char>st;
  int cost = 0;
  for(int i = 0; i < s.length(); i++){
    char ch = s[i];
    if(ch == '{'){
      st.push(ch);
    }
    else{
      if(st.empty()){
        cost++;
        st.push('{');
      }
      else{
        st.pop();
      }
    }
  }
  if(!st.empty()){
    cost += st.size()/2;
  }
  cout << cost << endl;
  return 0;
}