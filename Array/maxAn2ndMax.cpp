using namespace std ;
#include<bits/stdc++.h>
int main()
{
    int n = 5 ;
    int arr[n] = {2,2,4,4,1};
    vector<int>ans ;
    int max1 = INT_MIN ;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max1)
        {
        max1 = arr[i];
        
        }
        
    }
    ans.push_back(max1 );
    int max2 = INT_MIN ;
    for(int i = 0 ; i<n ;i++)
    {
        if(max1 == arr[i])
        {
            break;
        }
        else
        {
            if(arr[i] > max2)
            {
                max2 = arr[i];
            }
        }
    }
  ans.push_back(max2);

  for(int i = 0 ; i<ans.size() ; i++)
  {
    cout<<ans[i]<<" ";
  }

}