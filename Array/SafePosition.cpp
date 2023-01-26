using namespace std;

#include <bits/stdc++.h>
int findSafe(vector<int> Arr, int k, int idx)
{
    if (Arr.size() == 1)
    {
        return Arr[0];
    }
    // int idx = 0 ;
    idx = ((idx + k - 1) % Arr.size()); // getting removal index
    cout << "Arrsize = " << Arr.size() << " ";
    cout << endl;
    Arr.erase(Arr.begin() + idx);
    return findSafe(Arr, k, idx);
}
int safePos(int n, int k)
{
    // code here
    vector<int> Value;
    for (int i = 1; i <= n; i++)
    {
        Value.push_back(i);
    }
    int ans = findSafe(Value, k, 0);
    //   cout<<"hello";
    return ans;
}

int main()
{
    int n = 4, k = 2;
    cout << safePos(n, k);
}
