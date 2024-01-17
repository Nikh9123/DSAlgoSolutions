#include <bits/stdc++.h> 
using namespace std;

class TwoStack {
  int size;
  int top1; //start from begining of array
  int top2; //start from end of array 
  int* arr;
public:

  // Initialize TwoStack.
  TwoStack(int size) {
    // Write your code here.
    this->size = size;
    arr = new int[this->size];
    top1 = -1;
    top2 = this->size;
  }

  // Push in stack 1.
  void push1(int num) {
    //atleast there is one place in array 
    if (top2 - top1 > 1) {
      top1++;
      arr[top1] = num;
    }
    else {
      cout << "Not empty place " << endl;
      return;
    }
  }

  // Push in stack 2.
  void push2(int num) {

    //atleast there is one place in array 
    if (top2 - top1 > 1) {
      top2--;
      arr[top2] = num;
    }
    else {
      cout << "Not empty place " << endl;
      return;
    }
  }

  // Pop from stack 1 and return popped element.
  int pop1() {
    int num = -1;
    if (top1 >= 0) {
      num = arr[top1];
      top1--;
    }
    else {
      cout << "Stack 1 is empty now " << endl;
    }
    return num;
  }

  // Pop from stack 2 and return popped element.
  int pop2() {
    int num = -1;
    if (top2 < size) {
      num = arr[top2];
      top2++;
    }
    else {
      cout << "stack 2 is empty " << endl;
    }
    return num;
  }
};

int main() {
  int size = 5;
  // cout<<"Enter size of stack: " ;
  // cin>>size ;

  TwoStack sq = TwoStack(size);
  sq.push1(1);
  sq.push1(2);
  sq.push1(3);
  sq.push2(4);
  sq.push2(5);

  cout<<sq.pop1()<<endl;
  cout<<sq.pop2()<<endl;
  cout<<sq.pop1()<<endl;
  cout<<sq.pop2()<<endl;
  cout<<sq.pop1()<<endl;
  cout<<sq.pop2()<<endl;
  // sq.push1(1);

  // sq.push2(6);

}