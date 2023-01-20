// C++ program to find the minimum

/*
@https://www.geeksforgeeks.org/minimum-group-flips-to-make-binary-array-elements-same/

*/
// group flips in a binary array
#include <iostream>
using namespace std;

void printGroups(bool arr[], int n)
{

    // Traverse through all array elements
    // starting from the second element
    // for (int i = 1; i < n; i++) {

    //     // If current element is not same
    //     // as previous
    //     if (arr[i] != arr[i - 1]) {

    //         // If it is same as first element
    //         // then it is starting of the interval
    //         // to be flipped.
    //         if (arr[i] != arr[0])
    //             cout << "From " << i << " to ";

    //         // If it is not same as previous
    //         // and same as first element, then
    //         // previous element is end of interval
    //         else
    //             cout << (i - 1) << endl;
    //     }
    // }

    // // Explicitly handling the end of
    // // last interval
    // if (arr[n - 1] != arr[0])
    //     cout << (n - 1) << endl;


    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
                cout << "from " << i << " to ";
            else
            {
                cout << i - 1;
                cout<<endl;
            }
        }
    }
    if(arr[n-1] != arr[0])
    {
        cout<<n-1;
        cout<<endl;
    }
}

int main()
{
    bool arr[] = {0, 1, 1, 0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printGroups(arr, n);
    return 0;
}