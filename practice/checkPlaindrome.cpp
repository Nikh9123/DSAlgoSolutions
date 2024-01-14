#include<bits/stdc++.h>
using namespace std;

bool checkPlaindrome(string s, int i, int n) {
  if (i == n / 2) {
    return true;
  }
  if (s[i] != s[n - i - 1]) {
    return false;
  }
  return checkPlaindrome(s, i + 1, n);
}

int main() {
  int n = 1112112451;
  //convert int n to string s 
  string s = to_string(n);
  cout << s.size() << " -- " << s.size() / 2 << endl;

  if (checkPlaindrome(s, 0, s.size())) {
    cout << "given value is palindrome" << endl;
  }
  else {
    cout << "not palindrome " << endl;
  }

  return 0;

}