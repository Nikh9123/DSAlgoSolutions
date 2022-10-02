#include<iostream>
using namespace std ;
int main()
{
    for(int i = 2 ; i*i <= 16 ; i++)
    {
        for(int j = i*2 ; j<= 16 ; j = j+i)
        {
            cout<<j<<" ";
        }
    }
}