using namespace std;
#include <bits/stdc++.h>
int main()
{
  // int count = 0;
  // int n ;
  // cin>>n;
  // while(n != 0)
  // {
  //   count++ ;
  //   n /=10 ;
  // }
  // cout<<count ;

  // Airthmetic Mean ⚠️⚠️⚠️⚠️⚠️🥧
  // int Isterm ; //a1
  // cin>>Isterm ;
  // int TermPos ; //n
  // cin>>TermPos;
  // int CommonDiff ;//d
  // cin>>CommonDiff;

  // int AP = Isterm + (TermPos - 1)*CommonDiff ; //inding ap  of n terms
  // cout<<"AP = "<<AP<<endl;

  // //sum of n terms of AP
  // int sum = 0 ;
  // sum = (TermPos/2)*(2*Isterm + (TermPos -1)*CommonDiff);
  // cout<<sum<<" "<<endl;

  // Geometirc Progression ⚠️⚠️⚠️⚠️⚠️
  //  int Firsterm ; //a1
  //  cin>>Firsterm;

  // int CommonRatio; //r
  // cin>>CommonRatio;

  // int GeneralTerm ; //n
  // cin>>GeneralTerm;

  // int GP = Firsterm *((CommonRatio)^(GeneralTerm - 1));
  // int n = 39;
  // int k = 5 ;
  // if(n >>(k - 1) & 1 == 1) //using right shift operator
  // {
  //   cout<<"true"<<" "<<endl;
  // }
  // else{
  //   cout<<"false"<<endl;
  // }
  int n = 11;
  int i = 0;
  int ans = 0;
  while (n == 1 || n == 0)
  {
    int add = n % 2 ;
    if(add == 1)
    {
    ans = ans * 10 + add;
    n = n / 2;
    }
    if(add == 0)
    {
      ans = 
    }
    i++;
  }
  // cout<<ans ;
  cout << 11 / 2;
}