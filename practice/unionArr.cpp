


#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    int hash[N + 1] = {0}; //hash array

    // storing the frequencies:
    for (int i = 0; i < N - 1; i++)
        hash[a[i]]++;

    //checking the freqencies for numbers 1 to N:
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 1) {
            return i; 
        }
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}

int main()
{
    int N = 5; //size of array
    vector<int> a = {1,1,1,2,2,2,4};
    int ans = missingNumber(a, a.size());
    cout << "The missing number is: " << ans << endl;
    return 0;
}
