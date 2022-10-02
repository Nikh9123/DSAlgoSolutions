using namespace std ;
#include<bits/stdc++.h>
bool IsPrime(int n)
{
  if( n==1 )
  return false ;
  if(n ==2 || n ==3 )
  return true ;
  if(n % 2 == 0 || n % 3== 0)
  return false ;
  for(int i = 5 ; i*i <= n ; i+=6)
  {
    if(n % i == 0 || n % (i+2) == 0)
    {
        return false ;
    }
  }
  return true ;
}
void Seive(int n)
{
    vector<bool>Isprime(n+1, true);
    for (int i = 2; i * i <= n ; i++)
    {
        /* code */
        if(IsPrime(i))
        {
            for(int j = i*2 ; j <= n ; j = j+i)
            {
                Isprime[j] = false ;

            }
        }
    }
    for( int i = 2 ; i< Isprime.size();i++)
    {
        if(IsPrime(i))
        cout<<i<<" ";
    }
    
}
int main()
{
int n = 20 ;
Seive(n);

}