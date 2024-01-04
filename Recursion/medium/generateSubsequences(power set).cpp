#include<bits/stdc++.h>
using namespace std;


//* T.C. = O(2^n) && S.C. =O(n)
vector<vector<int>> getAllSubsequences(vector<int>& arr, vector<int> temp, int index) {
    if (index == arr.size()) {
        return { temp };
    }

    // Include the current element
    temp.push_back(arr[index]);
    auto include = getAllSubsequences(arr, temp, index + 1);

    // Exclude the current element
    temp.pop_back();
    auto exclude = getAllSubsequences(arr, temp, index + 1);

    // Concatenate include and exclude
    include.insert(include.end(), exclude.begin(), exclude.end());

    return include;
}

int main() {
    vector<int> arr = {1,2,2};
    vector<int> temp;
    vector<vector<int>> ans = getAllSubsequences(arr, temp, 0);

    cout << "The subsequences are : " << endl;
    for (auto x : ans) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}
