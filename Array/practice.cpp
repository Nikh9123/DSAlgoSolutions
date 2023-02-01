using namespace std;
#include <bits/stdc++.h>
int kConcatenationMaxSum(vector<int>& arr, int k) {
        vector<int>ans ;
        for(int i = 0 ; i < k ;i++)
        {
            for(int j = 0 ; j < arr.size() ; j++)
            {
                ans.push_back(arr[j]);
            }
        }
        for(int i = 0; i < ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        int sum = 0 , maxSum = 0 ;
        for(int i =  0; i< ans.size() ; i++){
            sum = sum+ans[i];
            maxSum = max(maxSum , sum);
        }
        return maxSum ;
    }
int main()
{
    vector<int>arr = {1,2};
    cout<<kConcatenationMaxSum(arr , 3);
    // int x = 3, y = 6;
    // cout << "x & y = " << (x & y) << " " << endl;
    // cout << "x | y = " << (x | y) << " " << endl;
    // cout << "x ^ y = " << (x ^ y) << " " << endl;

    // cout << "x <<  1 = " << (x << 1) << " " << endl;
    // cout << "x >> 1 " << (x >> 1) << " " << endl;
    // int x;
    // cin >> x;
    // if (x & 1 == 1)
    // {
    //     cout << "set" << endl;
    // }
    // else
    // {
    //     cout << "nhi bhai set nhi hai" << endl;
    // }
//     unsigned int x = 33;
//     cout << (x >> 1) << (x << 1) << endl;
}