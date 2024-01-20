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

void inOrderTraverse(TreeNode* root, vector<int>& inorder) {
    if (root == nullptr) {
      return;
    }

    inOrderTraverse(root->left, inorder);//
    inorder.push_back(root->val);
    inOrderTraverse(root->right, inorder);

  }
  vector<int> inorderTraversal(TreeNode* root) {
    vector<int>inorder;
    inOrderTraverse(root, inorder);
    return inorder;
  }

  void postOrderTraverse(TreeNode* root, vector<int>& postorder) {
    if (root == nullptr) {
      return;
    }

    postOrderTraverse(root->left, postorder); //
    postOrderTraverse(root->right, postorder);
    postorder.push_back(root->val);
  }

  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> postorder;
    postOrderTraverse(root, postorder);
    return postorder;
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