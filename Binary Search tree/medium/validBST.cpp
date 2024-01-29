#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
  bool isValidBST(TreeNode* root) {
    return bst(root, LLONG_MIN, LLONG_MAX);// LLONG_MIN and LLONG_MAX are the minimum and maximum values of long long int
  }
  //min_val is the minimum value of the left subtree and max_val is the maximum value of the left subtree
  bool bst(TreeNode* root, long long min_val, long long max_val) {
    if (root == NULL) {
      return true;
    }

    if (!(min_val < root->val && root->val < max_val)) {
      return false;
    }
  
    bool f1 = bst(root->left, min_val, root->val); //we are taking min_val so that the left subtree values are less than the root value
    bool f2 = bst(root->right, root->val, max_val);//we are taking max_val so that the right subtree values are greater than the root value
    return f1 && f2;
  }
};

int main() {
  //construct a valid bst 
  TreeNode* root = new TreeNode(5);
  root->left = new TreeNode(2);
  root->right = new TreeNode(12);

  root->left->left = new TreeNode(1);
  root->left->right = new TreeNode(3);

  root->right->left = new TreeNode(9);
  root->right->right = new TreeNode(21);

  root->right->left->left = new TreeNode(19);
  root->right->left->right = new TreeNode(25);

  Solution s;
  cout << s.isValidBST(root) << endl;
}