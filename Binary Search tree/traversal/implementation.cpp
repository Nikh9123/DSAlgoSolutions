#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;

  Node(int val) {
    data = val;
    left = right = nullptr;
  }

};

void printTree(Node* root){
  
}

int main() {

  //root level 
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);

  //root left
  root->left->left = new Node(4);
  root->left->right = new Node(6);

  //root right
  root->right->left = new Node(5);
  root->right->right = new Node(7);

}