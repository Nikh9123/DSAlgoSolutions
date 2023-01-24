using namespace std ;
#include<bits/stdc++.h>

// bool linearSearch(int arr[] , int n , int val)
//     {
//         for(int i =0 ; i < n ; i++)
//         {
//             if(arr[i] == val)
//             {
//                 return true ;
//             }
//         }
//         return false ;
//     }
//     int missingNumber(int arr[], int n) 
//     { 
//         // Your code here
//         // sort(arr , arr+n);
//         int smaller = 1 ; //minimum possitive number 
//         // for(int i = 0 ; i < n ; i++){
//         //   if(arr[i] == smaller)
//         //   {
//         //       smaller++ ;
//         //   }
//         // }
//         // return smaller ;
//         while (linearSearch(arr , n , smaller))
//         {
//             /* code */
//             smaller++ ;
//         }
        
        
//             return smaller ;
//     } 
int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); // we only care for elements who are in range of(1 to n)
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
    int main(){
        int n = 5 ;
       vector <int> arr = {1,2,3,4,5};
        cout<<firstMissingPositive(arr);
    }