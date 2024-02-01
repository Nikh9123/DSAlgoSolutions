#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    
    for (int i = 0; i < s.length(); i++) {

      //if there is any 
      if (isalpha(s[i]) || isdigit(s[i])) {
        if (isupper(s[i]))
          s[i] = tolower(s[i]);
      }
      else {
        s.erase(s.begin() + i);
        i--;
      }
    }
    string t = s;
    reverse(s.begin(), s.end());
    cout<<t<<" and "<<s<<endl;
    return t == s;
  }
};


int main() {
  string s = "A man, a plan, a canal: Panama";
  Solution obj;
  if (obj.isPalindrome(s)) {
    cout << "String is palindrome " << endl;
  }
  else {
    cout << "Not Palindrome" << endl;
  }
  return 0;
}