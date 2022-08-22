// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        // Your code goes here
        int missing1 = 0;
        int missing = (n * (n + 1)) / 2;
        for (int i = 0; i < n - 1; i++)
        {
            missing1 += array[i];
        }
        return missing - missing1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
} // } Driver Code Ends