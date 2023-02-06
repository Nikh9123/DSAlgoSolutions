using namespace std;
#include <bits/stdc++.h>

int SqaureRoot(int n)
{
    /*
    Naive method iterative TC = 0(root n)
    int i = 1 ;
    while(i*i <= n)
    {
        i++;
    }
    return i-1 ;
    */

    // Efficient method
    // use of binary search
    int low = 1, high = n, ans = -1;

    while (low <= high)
    {
    int mid = (low + high) / 2;
    int midSq = mid * mid;
        if(midSq == n)
        return mid ;
        
        else if(midSq > n)
        high = mid-1 ;

        else{
            low = mid+1 ;//so it will find the last biggest sqyare root value eg: n = 10 so mid will be = 2 but ans is 3 so for that we need to increase low = mid+1
            ans = mid ;
        }
    }
    return ans ;
}
int main()
{
    int n = 15;
    cout << SqaureRoot(n);
}
/*

*/