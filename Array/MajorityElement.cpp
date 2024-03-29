
/*
@https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
*/
using namespace std;
#include <bits/stdc++.h>
int majorityElement(int arr[], int n)
{

    // your code here
    //* brute force method TC = O(n^2)
    // for (int i = 0; i < n; i++)
    // {
        // int ele = arr[i] ;
        // int count = 1 ;
        // for(int j = 0 ; j < n ; j++)
        // {
        //     if(arr[j] == ele){
        //         count++ ;
        //     }
        // }
        // if(count > (n/2))
        // {
        //     return arr[i] ;
        // }
        // else {
        //     return -1 ;
        // }
    // }

    //* better solution : using map 
    //in map use element as array element and key as thier count 
    //^ Tc = O(nlogm) + O(n) where m is the size of map
    //^ Sc = O(n)
    map<int, int>storeEle;
    for (int i = 0; i < n; i++)
    {
        //store element with thier count in map [ele , count] = [2,4]
        storeEle[arr[i]]++;
    }
    for (auto it : storeEle)
    {
        if (it.second > (n / 2))
        {
            return it.first;
        }
    }
    return -1;



    /*
    //* efficient approach TC = O(n)
    //* for finding the most occured elements
    //* using moore's voting algorithm
    int votes = 1 , candidate = 0 ;

        for(int i = 1 ; i < n ; i++)
        {
            if(arr[candidate] == arr[i])
            {
                votes++ ;
            }
            else {
                votes-- ;
            }
            if(votes == 0)
            {
                candidate = i ;
                votes = 1 ;
            }

        }
        votes = 0 ;
        for(int i =0 ; i < n ; i++)
        {
            if(arr[i] == arr[candidate])
            {
                votes ++ ;
            }
        }

        if(votes > n/2)
            return arr[candidate];
        else
        return -1 ;
        */
}
int main()
{
    int n = 5;
    int arr[n] = { 3, 1, 3, 3, 2 };
    cout << majorityElement(arr, n);
}