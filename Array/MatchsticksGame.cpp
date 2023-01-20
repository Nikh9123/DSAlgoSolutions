/*
@https://practice.geeksforgeeks.org/problems/-matchsticks-game4906/1
*/
/*
you can think it like this...

for N = 1 to 4, we have to return N
Let arr[N] store, 0 and 1;
0, when the person who is playing (whose turn it is with N) will loose
1, when the person who is playing will win.
Now, for arr[N], where N<=4, value will be 1, (as the person whose chance it is will win.

Then for 5, there is no chance for the person to win, so we will store arr[5]=0.
For arr[6], let's say you are playing, then you will try to bring the N to 5, so you can win. You will choose 1 matchstick only. Hence, if it is your turn , you can win, which means, arr[6] = 1.

Similarly for arr[6] to arr[9].

then you can see that again for arr[10], there is no way for you to win.

instead of going with this long procedure, we observed that, you can win if the number is not divisible by 5.

Also, you have to take the opponent to nearest mmultiple of 5, to make yourself win.

Resulting in N%5 as a answer.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int matchGame(long long n) {
        // code here
        if(n % 5 == 0) 
        {
            return -1 ;
        }
        else 
        {
            cout<<"player will get the last  " <<n%5<<" matchstick and will win "<<endl;
            return n%5 ;
        }
    }
};

int main() {
    int N ;
    cin>>N;
        Solution ob;
        cout << ob.matchGame(N) << endl;
    return 0;
}

