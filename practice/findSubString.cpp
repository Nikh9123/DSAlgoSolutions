#include<bits/stdc++.h>
using namespace std;
int subarraysWithXORK(vector < int > a, int k) {
  // Write your code here
  map<int, int>strPrefixXor;
  int Xor = 0;
  int count = 0;
  for (int i = 0; i < a.size(); i++)
  {
    //prefix xor 
    Xor ^= a[i];
    cout<<"XOR = "<<Xor<<endl;

    //using formula
    int x = Xor ^ k;
    cout<<"target to find = "<<x<<endl;
    if (Xor == k)
    {
      count++;
    }
    if (strPrefixXor.find(x) != strPrefixXor.end())
    {
      count += strPrefixXor[x];
    }
    strPrefixXor[x]++;
  }
  return count;
}

int main()
{
  vector<int>arr = { 4,2,2,6,4 };
  int ans = subarraysWithXORK(arr, 6);
  cout << ans << endl;
}