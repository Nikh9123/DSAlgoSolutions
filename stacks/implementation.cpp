#include<bits/stdc++.h>
using namespace std ;

// Stack class.
class Stack {
    
public:
    int size ;
    int *a ;
    int topIndex ;
    Stack(int capacity) {
        // Write your code here.
        this->size = capacity;
        a = new int[size] ;
        topIndex = -1 ;
    }

    void push(int num) {
        // Write your code here.
        if(!isFull())
        {
            topIndex++ ;
            a[topIndex] = num ;
        }
        else{
            return ;
        }
    }

    int pop() {
        // Write your code here.
        int num = -1;
        if(!isEmpty())
        {
            num = a[topIndex];
            topIndex-- ;
        }
        return num ;
    }
    
    int top() {
        // Write your code here.
        if(topIndex == -1) return -1 ;
        else return a[topIndex] ; 
    }
    
    int isEmpty() {
        // Write your code here.
        if(topIndex == -1) return 1 ;
        else return 0 ;
    }
    
    int isFull() {
        // Write your code here.
        if(topIndex == size-1) return 1 ;
        else return 0 ;
    }
    
};

int main()
{
  int n = 5 ;
  Stack s(n) ;
  s.push(1) ;
  s.push(2) ;
  s.push(3) ;
  s.push(4) ;
  s.push(5) ;

  cout<<"size of stack is "<<s.size<<endl ;
  cout<<"top element is "<<s.top()<<endl ;

  cout<<"poped element is "<<s.pop()<<endl ;
  cout<<"poped element is "<<s.pop()<<endl ;
  cout<<"poped element is "<<s.pop()<<endl ;
  cout<<"poped element is "<<s.pop()<<endl ;
  cout<<"poped element is "<<s.pop()<<endl ;

  cout<<"is stack empty "<<s.isEmpty()<<endl ;
  cout<<"is stack full "<<s.isFull()<<endl ;

  return 0 ;
}
