using namespace std;

#include<bits/stdc++.h>

void Rotation(int arr[] , int n,int k)

{

   

 

         int d = k ;

            for(int i = 0 ; i < n-d ; i++)

    {

        k = k - i ;

        while(k > 0)

        {

        arr[n-k] = arr[i];

        }

        

        arr[i] = arr[i+k];

    }

 

    for(int j = 0 ; j < n-d ; j++)

    cout<<arr[j]<<" ";

}

int main()

{

    int n = 7 ;

int arr[n]= {1,2,3,4,5,6,7};

int k = 2 ;

Rotation(arr , n,k);

}

