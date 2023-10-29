#include<bits/stdc++.h>
using namespace std;

/*
this function will find the longest prefix in the given strings with time complexity O(n^2)

string findLongestPrefix(vector<string>s)
{
  string ans ;
  for (int i = 0; i < s[0].length(); i++) // this loop will run for the length of first string "coding"
  {
    char ch = s[0][i] ; // this line will give the characters of the first string "coding"

    for(int j = 1 ; j < s.size() ; j++) // this loop will run for the size of the vector means traverse the left strings "coders" , "coding ninjas" , "code damn
    {
      if( i >= s[j].length() || ch != s[j][i] ) // this condition will check if the index of the first string is greater than the size of the second string or the character of the first string is not equal to the character of the second string then break the loop
      {
        //* element not found
        break; // this will break the loop
      }
      else if (ans.back() != ch || ans.empty()) // this condition will check if the last character of the ans string is not equal to the character of the first string or the ans string is empty then push the character of the first string in the ans string
      {
        ans.push_back(ch);
      }
      
    }

  }
  return ans ;
}
*/


string longestCommonPrefix(vector<string>& s) {

  string ans ;
  string firstStr = s[0] ;

  for(string str : s)
  { 
    cout<<str.find(firstStr)<<endl;
    while(str.find(firstStr) != 0) // this means that if the first string is not present in the second string then erase the last character of the first string
    {
      firstStr.erase(firstStr.length() - 1);
    }
  }
  return firstStr ;
}
        



int main()
{
  vector<string>str = { "coding" ,"coders","coding ninjas" , "code damn" };
  string ans = longestCommonPrefix(str);
  cout << "the lonest prefix in string is : " << ans << endl;
}