#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() ;
        int low = 0, high = n-1 ;

        while(low <= high){
          int mid = (low+high)/2 ;

          if(nums[mid] == target){
            return mid ;
          }

          //find left part or right part

          if(nums[mid] > nums[low]){
          //&we are in left part

          if(target <= nums[mid] && target >= nums[low]){
            high = mid - 1 ;
          }
          else{
            low = mid + 1 ;
          }
          }
          else{//eg: 8,7,1,2,3,4,5,6, mid = 2 and mid < nums[low] go for right side
            if(target <= nums[high] && target >= nums[mid]){
              low = mid + 1 ;
            }
            else{
              high = mid - 1 ;
            }
          } 

        }
        return -1 ;
    }
};


int main(){
    Solution obj ;
    vector<int> nums = {4,5,6,7,0,1,2} ;
    int target = 0 ;
    cout << obj.search(nums, target) << endl ;
    return 0 ;
}