#include<bits/stdc++.h>
using namespace std;

void printName(int n) {
  if (n == 0) {
    return;
  }
  cout << "Nikhil" << endl;
  printName(n - 1);
}

void print1toN(int n, int val) {
  if (n < val) return;

  cout << val << " ";
  print1toN(n, val + 1);
}

void printNto1(int n) {
  if (n <= 0) {
    return;
  }
  cout << n << " ";
  printNto1(n - 1);
}

void print1toNBackTrack(int n) {
  if (n <= 0) {
    return;
  }
  print1toNBackTrack(n - 1);
  cout << n << " ";
}

void printNto1BackTrack(int n, int val) {
  if (val > n) return;

  printNto1BackTrack(n, val + 1);
  cout << val << " ";
}

int sumTillN(int n) {
  if (n <= 0) {
    return 0;
  }

  n += sumTillN(n - 1);

  return n;
}

int factorial(int n) {
  if (n <= 1) {
    return 1;
  }

  n *= factorial(n - 1);

  return n;
}

int fibonacci(int n) {
  if (n <= 1)
    return n;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n = 5;
  // printName(n);
  // print1toN(n, 1);
  // cout << endl;
  // printNto1(n);
  // cout<<endl;
  // print1toNBackTrack(n);
  // printNto1BackTrack(n, 1);
  int sum = 0;
  // sumTillN(5);
  cout << sumTillN(5) << endl;
  cout << factorial(6) << endl;
  cout << fibonacci(5);
  return 0;
}