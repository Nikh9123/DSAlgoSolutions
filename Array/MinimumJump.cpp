/*
@https://leetcode.com/problems/jump-game-ii/submissions/883942264/
@https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&category[]=Arrays&curated[]=1&sortBy=submissions
*/

/*
Input:
N = 11
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3
Explanation:
First jump from 1st element to 2nd
element with value 3. Now, from here
we jump to 5th element with value 9,
and from here we will jump to the last.
*/

using namespace std;
#include <bits/stdc++.h>

int jump(vector<int> &nums)
{
    int n = nums.size();
    int current = 0;  // current hum kitna dur distance tak jaa sakte hain for farthest value
    int farthest = 0; // for finding the maximum distance from a element
    int jump = 0;

    for (int i = 0; i < n - 1; i++)
    {
        farthest = max(farthest, nums[i] + i);

        if (current == i) // pure last i tak traverse karne pe hume farthest value mil jayegi
        {
            jump++;             // value milne ke baad jump lenge
            current = farthest; // current ko farthest ki value se update karenge
        }
    }
    return jump;
}
int main()
{
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << jump(arr);
}