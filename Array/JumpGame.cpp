/*
Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [2,3,0,1,4]
Output: 2
*/
#include <bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums) {
    int n = nums.size();
    int current = 0; //current hum kitna dur distance tak jaa sakte hain for farthest value
    int farthest = 0; //for finding the maximum distance from a element
    int jump = 0;

    for (int i = 0; i < n - 1; i++)
    {
        farthest = max(farthest, nums[i] + i);

        if (current == i) //pure last i tak traverse karne pe hume farthest value mil jayegi uske baad
        {
            jump++;//value milne ke baad jump lenge
            current = farthest; //current ko farthest ki value se update karenge 
        }
    }
    return jump;

}

int main() {
    vector<int>arr = { 2,4,5,0,8 };
    cout << jump(arr);
}