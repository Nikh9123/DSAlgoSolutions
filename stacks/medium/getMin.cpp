#include<bits/stdc++.h>
using namespace std ;

class MinStack {
    stack<pair<int, int>> st ;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int mini ;

        //if the stack is empty then the first element himself is mimimum element
        if(st.empty()){
            mini = val ;
        }
        else{

            //then we keep the track of element with thier correspondng minimum and push into stack 
            mini = min(st.top().second, val);
        }
        st.push({val, mini});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first ;
    }
    
    int getMin() {
        return st.top().second ;
    }
};

int main(){

}