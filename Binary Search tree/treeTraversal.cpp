#include<bits/stdc++.h>
using namespace std;

//define tree

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
  void preOrderTraverse(TreeNode* root, vector<int>& preorder) {
    if (root == nullptr) {
      return;
    }
    preorder.push_back(root->val);
    preOrderTraverse(root->left, preorder);
    preOrderTraverse(root->right, preorder);
  }
  vector<int> preorderTraversal(TreeNode* root) {
    vector<int>preorder;
    preOrderTraverse(root, preorder);
    return preorder;
  }


  
};

int main() {
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(6);

  root->left->left->left = new TreeNode(8);
  root->left->left->right = new TreeNode(9);

  root->right->left = new TreeNode(11);
  root->right->right = new TreeNode(12);

  Solution s;

  // vector<int> ans = s.preorderTraversal(root);
  vector<int> ans = s.inorderTraversal(root);

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;

  return  0;
}