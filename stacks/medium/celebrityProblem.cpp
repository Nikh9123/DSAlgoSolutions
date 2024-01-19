/*

& question link -> https://www.geeksforgeeks.org/problems/the-celebrity-problem/1
A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.
Follow Up: Can you optimize it to O(N)


Example 1:

Input:
N = 3
M[][] = {{0 1 0},
         {0 0 0},
         {0 1 0}}
Output: 1
Explanation: 0th and 2nd person both
know 1. Therefore, 1 is the celebrity.

Example 2:

Input:
N = 2
M[][] = {{0 1},
         {1 0}}
Output: -1
Explanation: The two people at the party both
know each other. None of them is a celebrity.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
  bool knows(vector<vector<int> >& M, int a, int b, int n) {
    if (M[a][b] == 1) {
      cout << "M[" << a << "][" << b << "] = " << M[a][b] << endl;
      return true;
    }
    else {
      return false;
    }
  }
public:
  //Function to find if there is a celebrity in the party or not.
  int celebrity(vector<vector<int> >& M, int n)
  {
    // code here 
    stack<int>s;
    //step 1 push all elements in stack
    for (int i = 0; i < n; i++) {
      cout << "i = " << i << " ";
      s.push(i);
    }
    cout << endl;

    //step 2
    while (s.size() > 1) {
      int a = s.top();
      cout << "a = " << a << endl;
      s.pop();

      int b = s.top();
      cout << "b = " << b << endl;
      s.pop();

      if (knows(M, a, b, n)) { // a knows b then a cann't be celebrity so push b in stack
        cout << "a knows b" << endl;
        s.push(b);
      }
      else { // b knows a then b cann't be celebrity so push a
        cout << "b knows a" << endl;
        s.push(a);
      }

      //step 3 : single element in stack is potential possiblity of celebrity so verify it
      int candidate = s.top();

      //checking for its row 
      bool rowCheck = false;
      int zeroCount = 0;

      for (int i = 0; i < n; i++) {

        if (M[candidate][i] == 0) {
          zeroCount++;
        }
      }

      if (zeroCount == n) { //check for all zeros
        rowCheck = true;
      }

      //check for column
      bool columnCheck = false;
      int nonZero = 0;
      for (int i = 0; i < n; i++) {
        if (M[i][candidate] != 0) {
          nonZero++;
        }
      }

      if (nonZero == n - 1) {
        columnCheck = true;
      }

      if (rowCheck == true && columnCheck == true) {
        return candidate;
      }
      else {
        return -1;
      }
    }
  }
};
int main() {
  vector<vector<int>> party = {
                               {0,1,0},
                               {0,0,0},
                               {0,1,0}
  };
  // vector<vector<int>> party = {
  //                              {0,1},
  //                              {1,0}
  // };
  int n = party.size(); //no of person in party
  Solution s;
  int celeb = s.celebrity(party, n);
  cout << "the celebrity is : " << celeb << endl;

}
