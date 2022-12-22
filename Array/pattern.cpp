#include <iostream>
#include <string> // for string class
using namespace std;

// Driver Code

bool searchPattern(string str, string pat)

{

   int n = str.length();

   int m = pat.length();

   

//   string temp = "";

//   int count   = 0;

   bool flag   = false;

   for(int i=0;i<=(n-m);i++)

   {

       if(str[i]==pat[0]) //comparing first element of pat 

       {

       string temp="";   //created a balnk string 

       for(int j=i;j<(m+i);j++)   //chuki humlog i  aagey badh jayenge isliye humlog ko pura str ke element ke i aagey tak jaana padega 
       

       {

           temp+=str[j]; //temp me str ke element store kara rhe 

       }

       

       if(temp == pat)   //agar temp mera pat ke equal hai to return true ;

       {

         flag = true;

       } 

       temp="";

       }

       else

          continue;

   }

   

   return flag;

}
int main()
{
    // Initializing string
    string str = "abcdefh";
    string pat = "bf";
   cout<< searchPattern(str , pat) ;
    
}