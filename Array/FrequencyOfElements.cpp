/*
@Frequencies in a Sorted Array
*/



using namespace std ;
#include<bits/stdc++.h>
void Frequency(int arr[], int n )
{

    int temp[n];
    sort(arr , arr + n);
    int i =1 , freq =1;
    while(i < n)
    {
        while(i < n && arr[i] == arr[i-1])
        {
            freq++ ;
            i++ ;

        }
    cout<<"element : "<<arr[i-1] <<" and"<<"Frequency : "<<freq<<endl;
    i++ ; //if(arr[i] != arr[i-1]) then i uske aagey wale element se check karega 
    freq = 1 ;    
    }
    
    if(n == 1 || arr[n-1] != arr[n-2])
    {
    cout<<"element : "<<arr[n-1] <<" and"<<"Frequency : "<<1<<endl;
    }

}

int main(){
    int n = 5;
    int arr[n] = {3,1,3,3,2} ;
    Frequency(arr ,n);
}