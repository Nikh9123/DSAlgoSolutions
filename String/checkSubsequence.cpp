//@https://leetcode.com/problems/is-subsequence/

#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0, j = 0;
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            j++ ;
            i++ ;
        }
        else{
          i++ ;
        }
    }
    return j == t.length();
}

int main() {
    string t = "axc", s = "ahbgdc";
    
    if (isSubsequence(s, t)) {
        cout << "s is a subsequence of t" << endl;
    } else {
        cout << "s is not a subsequence of t" << endl;
    }

    return 0;
}
