#include<bits/stdc++.h>
using namespace std;
/**
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented
by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain
water (blue section) are being trapped.
 *
*/
class Solution {
public:

  //T.C = O(3n) and S.c  O(2n)
  int trap1st(vector<int>& height) {

    int n = height.size();

    //store the max hieght of left buildings and the maximum hieht of rightside bulidings
    vector<int>leftmaxBuilding(n);
    vector<int>rightmaxBuilding(n);


    leftmaxBuilding[0] = height[0];
    rightmaxBuilding[n - 1] = height[n - 1];

    for (int i = 1; i < n; i++) {
      leftmaxBuilding[i] = max(height[i], leftmaxBuilding[i - 1]);
    }
    cout << "Printing left max height of buildings ";
    for (auto x : leftmaxBuilding) {
      cout << x << " ";
    }
    cout << endl;
    for (int i = n - 2; i >= 0; i--) {
      rightmaxBuilding[i] = max(rightmaxBuilding[i + 1], height[i]);
    }
    cout << "Printing right max height of buildings ";
    for (auto x : rightmaxBuilding) {
      cout << x << " ";
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += (min(leftmaxBuilding[i], rightmaxBuilding[i]) - height[i]);
    }
    return sum;
  }

  int trap(vector<int>& height) {
    int n = height.size();
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = n - 1;
    int res = 0;
    while (left <= right) {

      if (height[left] <= height[right]) { //if there is any building whose height is greater than or equal to left bilding then we can store water between them

        if (height[left] >= height[leftMax]) // we can't store water there kyunki paani dharak jayega wahanse niche
        {
          leftMax = left;
        }
        else {
          res += (height[leftMax] - height[left]); // if there is any buliding whose height is lesser than its max left height than we can store water there  
          cout << "res = " << res << endl;
        }
        left++;
      }
      else if (height[right] <= height[left]) { //if there is any buildig in left whose height is greater than it own height then water can be stored between them 

        if (height[right] >= height[rightMax]) { // if the building himself height is greater than it right max it can't store any of water
          rightMax = right;
        }

        else {
          res += (height[rightMax] - height[right]); // if there is any buliding whose height is lesser than its max right building height than we can store water there 
          cout << "res = " << res << endl;
        }
        right--;
      }
    }
    return res;
  }

};
int main() {
  
  vector<int>height = { 0,1,0,2,1,0,1,3,2,1,2,1 };
  Solution s;

  cout << "ans = " << s.trap(height) << endl;

}