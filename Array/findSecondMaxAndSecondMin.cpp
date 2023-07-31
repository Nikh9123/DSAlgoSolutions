#include<bits/stdc++.h>
using namespace std ;

//& @https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?leftPanelTab=0

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    // Write your code here.
    vector<int>ans ;
    int max = arr[0] , secondMax = -1 ;
    int min = arr[0] , secondMin = -1 ;

    for(int i = 1 ; i < n ; i++)
    {
        //case 1: 
       if(arr[i] > max)
       {
           secondMax = max ;
           max = arr[i] ;
       }
       //case 2: arr[i] < max --> implement  ||| arr[i] == secondMax--> ignore
       else if(arr[i] < max) {
       if(secondMax == -1 || arr[i] > secondMax)
       {
           secondMax = arr[i] ;
       }
       }
    }

    for(int i = 1 ; i < n ; i++)
    {
        //case 1: 
       if(arr[i] < min)
       {
           secondMin = min ;
           min = arr[i] ;
       }

       //case 2: arr[i] < max --> implement  ||| arr[i] == secondMax--> ignore
       
       else if(arr[i] > min) {
       if(secondMin == -1 || arr[i] < secondMin)
       {
           secondMin = arr[i] ;
       }
       }
    }
    ans.push_back(secondMax);
    ans.push_back(secondMin);
    return ans ;
}

int main()
{
  vector<int>arr = {1,4,2,5,6,23,44} ;
  vector<int>ans = getSecondOrderElements(arr.size() , arr) ;

  for(int i =0 ; i < ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }

}
