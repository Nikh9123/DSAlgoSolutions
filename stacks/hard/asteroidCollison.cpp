//& Question Link :-  https://leetcode.com/problems/asteroid-collision/description/
//& soltuion Link :- https://www.youtube.com/watch?v=7isfomHzzno&list=PLpIkg8OmuX-IA6_cJxfTYCmnv1jkqox47&index=12
/**
735. Asteroid Collision
Medium
Topics
Companies
Hint
We are given an array asteroids of integers representing asteroids in a row.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.



Example 1:

Input: asteroids = [5,10,-5]
Output: [5,10]
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
Example 2:

Input: asteroids = [8,-8]
Output: []
Explanation: The 8 and -8 collide exploding each other.
Example 3:

Input: asteroids = [10,2,-5]
Output: [10]
Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.

*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> asteroidCollision(vector<int>& asteroids) {
    int n = asteroids.size();
    stack<int> st;  // Stack to keep track of asteroids
    vector<int>ans;  // Vector to store the final state of asteroids
    bool flag = false;
    for (int& a : asteroids) {  // Iterate over each asteroid
      // Check for collision: if the top of the stack is moving right (positive) and the current asteroid is moving left (negative)
      while (!st.empty() && st.top() > 0 && a < 0) {
        int sum = st.top() + a;  // Calculate the sum of the sizes of the two asteroids

        if (sum < 0) {  // If the sum is negative, the left-moving asteroid is larger
          st.pop();  // Remove the right-moving asteroid from the stack
        }
        else if (sum > 0) {  // If the sum is positive, the right-moving asteroid is larger
          a = 0;  // Set the size of the left-moving asteroid to 0
          break;  // Break the loop as the left-moving asteroid has been destroyed
        }
        else {  // If the sum is 0, both asteroids are of the same size
          st.pop();  // Remove the right-moving asteroid from the stack
          a = 0;  // Set the size of the left-moving asteroid to 0
        }
      }
    }
    if (a != 0) st.push(a);  // If the size of the asteroid is not 0, add it to the stack
  }
  if (st.empty()) {  // If the stack is empty, return an empty vector
    return {};
  }
  while (!st.empty()) {  // While the stack is not empty
    ans.push_back(st.top());  // Add the top of the stack to the vector
    st.pop();  // Remove the top of the stack
  }

  reverse(ans.begin(), ans.end());  // Reverse the vector to get the final state of the asteroids
  return ans;  // Return the final state of the asteroids
}
};


int main() {
  vector<int>asteroids = { 3,2,5,-1,-2,-8 };
  // vector<int>asteroids = { 5,10,-5 };
  // vector<int>asteroids = { -2,-1,2,1 };
  // vector<int>asteroids = { 8,-8 };


  Solution s;
  vector<int> ans = s.asteroidCollision(asteroids);

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;
}