/*
@https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=1&category[]=Arrays&curated[]=1&sortBy=submissions
*/

/*
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. 
 

Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
 sort(a1 , a1+n);
 sort(a2 , a2+m);
 
 int i = 0 , j =0 ;
 while(j < m && i < n){
     
     if(a1[i] == a2[j]) 
     {
         i++ ;
         j++ ;
     }
     else if(a2[j] > a1[i]) 
     {
         i++ ;  //uske aagey check karenge   
     }
     else{ //(a2[j] < a1[i]) and a2[j] is not present 
         return "No";
     }
 }
 
 if(j == m)
 return "Yes" ;
 else 
 return "No" ;
     
}