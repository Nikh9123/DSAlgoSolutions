#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string t, int n, int i) {
  if (i >= n / 2) return true;

  if (t[i] != t[n - i - 1]) return false;
  return checkPalindrome(t, n, i + 1);

}

int main()
{
  string s = "abba";

  if (checkPalindrome(s, s.length(), 0))
  {
    cout << s << " is a palindrome" << endl;
  }
  else {
    cout << s << " is not a palindrome" << endl;
  }
  return 0;
}