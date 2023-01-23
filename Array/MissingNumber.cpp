using namespace std;
#include <bits/stdc++.h>
int MissingNumber(vector<int> &array, int n)
{
    // Your code goes here
    int count = 1;
    sort(array.begin(), array.end());
    for(int i = 0 ; i < array.size(); i++)
    {
        cout<<array[i]<<" " ;
    }
    cout<<"hi"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == count)
        {
            cout<<"array[i] = "<<array[i]<<" "<<"count = "<<count<<endl;
            count++;
        }
        else
        {
            return count;
        }
    }

    /*
      sort (arr.begin(),arr.end());

for (int i=0;i<n;i++) {

if (arr[i]!=i+1)

return i+1;              }*/
}

int main()
{
    int N = 10;
    vector<int> A = {6, 1, 2, 8, 3, 4, 7, 10, 5};
    cout<<MissingNumber(A , N);
}