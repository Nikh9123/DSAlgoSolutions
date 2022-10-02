//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        // code here
        sort(arr, arr + n);
        vector<int> ans;

        if (n == 0)
        {
            cout << -1 << endl;
        }
        int current = arr[0];
        for (int i = 1; i < n; i++)
        {

            if (current == arr[i]) // ye check kar rhe ki kya currnet me jo element store hain wo arr[i] ke equal hai ya nahi
            {
                ans.push_back(arr[i]);
                while (arr[i] == current) // kahan tak same element hai wo check karne ke liye
                {
                    i++; // jahan tak element same hoga wahan tak i jaayega
                         // cout<<i<<" ";
                }
            }

            current = arr[i]; // aur phir curr me wahan ke element store ho jayega
        }

        if (ans.size() == 0)
        {
            return {-1};
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends