/*
@https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1
@https://leetcode.com/problems/first-missing-positive/
*/

/*
Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing
number is 6.
Example 2:

Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
Explanation: Smallest positive missing
number is 2.
*/

using namespace std;
#include <bits/stdc++.h>
int MissingNumber(vector<int> &nums)
{

    // Your code goes here

     // we only care for elements who are in range of(1 to n)
    int n = nums.size();  

    // naive method
    /*
    int count = 1;
    sort(array.begin(), array.end());
    for(int i = 0 ; i < array.size(); i++)
    {
        cout<<array[i]<<" " ;
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] == count)
        {
            cout<<"array[i] = "<<array[i]<<" "<<"count = "<<count<<endl;
            count++;
        }
        else
        {
            return count;
        }
    }


      sort (arr.begin(),arr.end());

for (int i=0;i<n;i++) {

if (arr[i]!=i+1)

return i+1;              }*/

    // efficient method 💰💰💰💰
    // 🪙 =>  0,-10,1,3,-20
    //  ;) currEle : current element at index i
    //:( chair = correct index of elements

        for(int i =0 ; i < nums.size() ; i++)
        {
            int currEle = nums[i] ; // eg : currEle = 4
            
            //check if current element isn't sitting on it's correct position  and swap 
            if(currEle >= 1 && currEle <= n ){
            int chair = currEle -1 ; //chair where element should sit currEle -1 :eg= 4-1= 3 
            if(currEle != nums[chair] )
            {
                 swap(nums[chair] , nums[i]) ;
                 i-- ; //again check if element on index is correct position or not 
            }
            }
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != i+1)
            return  i+1 ;
        } 
        return n+1 ;
}

int main()
{
    vector<int>A = {1,2,3,4,5};
    
    cout << MissingNumber(A);
}