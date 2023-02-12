using namespace std;
#include <bits/stdc++.h>

int Repeat(int arr[], int n)
{
  //* O(n^2) solution
  // int count = 1;
  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = i+1; j < n; j++)
  //   {
  //     if (arr[i] == arr[j])
  //     {
  //       return arr[i];
  //     }
  //   }
  // }

//   //* O(nlogn)
//   sort(arr , arr+n);
//   for(int i = 0 ; i < n ; i++)
//   {
//      if(arr[i] == arr[i+1])
//      return arr[i];
//   }


// //* T.C.= O(n) and S.C. = O(n)
//   bool match[n-1] ;
//   //todo: make the boolean false intially
// 	memset(match, false, sizeof(match));

//   // todo: make ith index true for each arr[i] value 
//   for(int i = 0 ; i <n ; i++)
//   {
//     if(match[arr[i]])
//     return arr[i];
//     match[arr[i]] = true ;
//   }

//* chaining method 


}



int main()
{
  int n = 6,m=5;
  int arr[n] = {0, 2, 1, 3, 3, 3};
  cout << Repeat(arr, n);
}