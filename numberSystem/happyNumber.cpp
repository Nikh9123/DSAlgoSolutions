#include<bits/stdc++.h>
using namespace std;
/*
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.


Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
*/

class Solution {
public:
  vector<int>getNum(int n) {
    cout << "n = " << n << endl;
    vector<int>strNum;
    while (n != 0) {
      int n1 = n % 10;
      cout << "n1 = " << n1 << endl;
      strNum.push_back(n1);
      n = n / 10;
    }

    return strNum;
  }
  bool isHappy(int n) {

    if (n < 0) return false;
    cout << "n = " << n << endl;
    
    vector<int>strNumber = getNum(n);
    int sum = 0;
    while (true) {
      sum = 0; // reset sum to 0 before each calculation
      for (int i = 0; i < strNumber.size(); i++) {
        sum += (strNumber[i] * strNumber[i]);
      }
      if (sum == 1) return true;
      else if (sum == 4) return false; // if sum is 4, it will never be a happy number
      strNumber = getNum(sum);
    }
  }
};

int main() {
  int n;
  cin >> n;
  Solution s;
  cout << s.isHappy(n) << endl;
}