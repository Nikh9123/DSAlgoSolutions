// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
       sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0]; // Maximum possible height difference
  
    int tempmin, tempmax;
    tempmin = arr[0];
    tempmax = arr[n - 1];
  
    for (int i = 1; i < n; i++) {
        if(arr[i] - k < 0) // if on subtracting k we got negative then continue 
        continue;
        tempmin= min(arr[0] + k,arr[i] - k); // Minimum element when we
                                                // add k to whole array
        tempmax = max(arr[i - 1] + k, arr[n - 1] - k); // Maximum element when we
                                                         // subtract k from whole array
        ans = min(ans, tempmax - tempmin); 
    }
    return ans;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends