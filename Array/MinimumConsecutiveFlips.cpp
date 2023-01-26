// C++ program to find the minimum

/*
@https://www.geeksforgeeks.org/minimum-group-flips-to-make-binary-array-elements-same/
0, 1, 1, 0, 0, 0, 1, 1
*/
// group flips in a binary array
#include <iostream>
using namespace std;

void printGroups(bool arr[], int n)
{

for(int i = 1 ; i < n ; i++)
{
    if(arr[i] != arr[i-1])// comdition for checking that it is the begining of new grp to be flip
    {
        if(arr[i] != arr[0]) // condition for is array element that current element is not equal to first element
        {
            cout<<"from "<<i<<" to " ;
        }
        else{
            cout<<i-1;
            cout<<endl;
        }
    }
}
if(arr[n-1] != arr[0] || n==1) //last terminating condition
{
    cout<<n-1;
}

}

int main()
{
    bool arr[] = {0, 1, 1, 0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printGroups(arr, n);
    return 0;
}