#include <iostream>
using namespace std;


bool isPalindrome(string str, int start, int end)
{
	if(start >= end)
		return true;

	return ((str[start]==str[end]) && 
		     isPalindrome(str, start + 1, end - 1));
}

int main() {
	
	string s = "GeekskeeG";
	
		cout<<isPalindrome(s , 0 , s.length()-1);
	
	return 0;
}