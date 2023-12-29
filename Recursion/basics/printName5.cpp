#include<iostream>
using namespace std;

void printName(int n)
{
  if (n == 5) return;

  cout << "Nikhil" << endl;

  printName(n + 1);
}

int main()
{
  printName(0);
  return 0;
}