using namespace std;
#include <bits/stdc++.h>

void LeaderInArr(int arr[], int n)
{
    vector<int> ans;
    ans.push_back(arr[n-1]);
    int curr = arr[n-1] ;
    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i] > curr)
        {
            curr = arr[i] ;
            ans.push_back(curr);
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
int main()
{
    int n = 7;
    int arr[n] = {7, 10, 4, 3, 6, 5, 2};
    LeaderInArr(arr , n);
}