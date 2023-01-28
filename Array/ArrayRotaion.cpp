
// Rotate Array
// Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer.

// Example 1:

// Input:
// N = 5, D = 2
// arr[] = {1,2,3,4,5}
// Output: 3 4 5 1 2
// Explanation: 1 2 3 4 5  when rotated
// by 2 elements, it becomes 3 4 5 1 2.
// Example 2:

// Input:
// N = 10, D = 3
// arr[] = {2,4,6,8,10,12,14,16,18,20}
// Output: 8 10 12 14 16 18 20 2 4 6
// Explanation: 2 4 6 8 10 12 14 16 18 20
// when rotated by 3 elements, it becomes
// 8 10 12 14 16 18 20 2 4 6.

// Your Task:
// Complete the function rotateArr() which takes the array, D and N as input parameters and rotates the array by D elements. The array must be modified in-place without using extra space.

//juggling algorithm 
/**Instead of moving one by one, divide the array into different sets where the number of sets is equal to the GCD of N and d (say X. So the elements which are X distance apart are part of a set) and rotate the elements within sets by 1 position to the left. 

1. Calculate the GCD between the length and the distance to be moved.
2. The elements are only shifted within the sets.
3. We start with temp = arr[0] and keep moving arr[I+d] to arr[I] and finally store temp at the right place.
Let arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12} and d = 3

⚠️. First step:
        => First set is {1, 4, 7, 10}.
        => Rotate this set by one position to the left.
        => This set becomes {4, 7, 10, 1}
        => Array arr[] = {4, 2, 3, 7, 5, 6, 10, 8, 9, 1, 11, 12}

⚠️. Second step:
        => Second set is {2, 5, 8, 11}.
        => Rotate this set by one position to the left.
        => This set becomes {5, 8, 11, 2}
        => Array arr[] = {4, 5, 3, 7, 8, 6, 10, 11, 9, 1, 2, 12}

⚠️. Third step:
        => Third set is {3, 6, 9, 12}.
        => Rotate this set by one position to the left.
        => This set becomes {6, 9, 12, 3}
        => Array arr[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2, 3}

Follow the steps below to solve the given problem. 

⚠️. Perform d%n in order to keep the value of d within the range of the array where d is the number of times the array is rotated and N is the size of the array.
⚠️. Calculate the GCD(N, d) to divide the array into sets.
⚠️. Run a for loop from 0 to the value obtained from GCD.
⚠️. Store the value of arr[i] in a temporary variable (the value of i denotes the set number).
⚠️. Run a while loop to update the values according to the set.
⚠️. After exiting the while loop assign the value of arr[j] as the value of the temporary variable (the value of j denotes the last element of the ith set).*/



using namespace std;
#include <bits/stdc++.h>

    int gcd(int a , int b)
    {
        if(b == 0)
        return a ;
        
        return gcd(b , a % b);
    }
    void rotateArr(int arr[], int d, int n){
        // code here
        // implementaion of juggling algo
          d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
for(int i=0 ; i<n ; i++)
cout<<arr[i]<<" ";




//    naive approach 
// int t=0 ;
// while(t < d)
// {
//     int temp = arr[0];
//     for(int i = 0 ; i < n-1 ; i++)
//     {
//         arr[i] = arr[i+1] ;
//     }
//     t++ ;
//     arr[n-1] = temp ;
// }
// for(int i=0 ; i<n ; i++)
// cout<<arr[i]<<" ";
    }
int main()
{
    int n = 12;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int k = 3;
    rotateArr(arr, k, n);
}
