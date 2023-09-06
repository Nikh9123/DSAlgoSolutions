

using namespace std ;
#include<bits/stdc++.h>
int ArrMax(int arr[] , int n)
{
    // int maxi = INT_MIN ;
    // int maxInd = 0 ;
    // int i ;
    // for( i =0 ; i < n ; i++)
    // {
    //     if(arr[i]> maxi)
    //     {
    //         maxi = arr[i] ;
    //         maxInd =  i ;
    //     }
    // }
    // int mini = INT_MAX ;
    // for(int j = 0; j < maxInd ; j++)
    // {
    //     if(arr[j] < mini)
    //     {
    //         mini = arr[j] ;
    //     }
    // }
    // cout<<"max = "<<maxi <<" mini "<<mini<<endl;
    // int maxDiff = maxi - mini ;
    // return maxDiff ;

    //naive solution 
    // int res = arr[1] - arr[0] ;
    // for(int i =0 ; i < n-1 ; i++)
    // {
    //     for(int j = i+1 ; j < n ; j++)
    //     {
    //         res = max(res , (arr[j] - arr[i]));
    //     }
    // }
    // return res ;
    

    //efficient approach 
    int res = arr[1] - arr[0]  ,  minVal = arr[0] ;
    for(int i = 1 ; i < n; i++)
    {
        res = max(res , arr[i] - minVal) ; //finding maximum diff between arr[i] - minvalue and res 
        minVal = min(arr[i] , minVal);  /// minVal ko uske aagey ke jth element 
        // se compare karke usko chota bana rhe
    }
    return res ;
    /*class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = -1;
        for(int i=0;i<nums.size();i++){
            int j = i + 1;
            while(j < nums.size() && nums[i] < nums[j]){
                if(nums[j] - nums[i] > diff){
                    // cout<<diff<<" ";
                    cout<<nums[j]-nums[i];
                    diff = nums[j]-nums[i];
                }
                j++;
            }
        }
        return diff;
    }

};*/
}
int main()
{
int n = 3 ;
int arr[n] ={10,20,30};
cout<<ArrMax(arr ,n);

}