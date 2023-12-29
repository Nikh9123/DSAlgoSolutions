#include<bits/stdc++.h>
using namespace std;

int sumOfFirstN(int n)
{

  if (n == 0) return 0;

  n +=  sumOfFirstN(n - 1);;
  return n;
}

void sumOfFirstNP(int n, int sum)
{
  if(n == 0){
    cout<<"the sum is : "<<sum<<endl;
    return ;
  }

  sumOfFirstNP(n-1, sum+n);
}


int main()
{
  int n;
  cout << "enter the value of n : ";
  cin >> n;
  cout << "sum of first " << n << " natural numbers is : " << sumOfFirstN(n) << endl;
  sumOfFirstNP(n,0);
  return 0;
}