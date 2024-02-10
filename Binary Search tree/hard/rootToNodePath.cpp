#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
  TreeNode* left;
  TreeNode* right;
  int val;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {};
};

void helper(TreeNode* root, int x, vector<int>& ds) {
  if (!root) return;

  ds.push_back(root->val);
  
  if (root->val == x) {
    return;
  }
  helper(root->left, x, ds);
  helper(root->right, x, ds);
  if (ds.back() != x) {
    ds.pop_back();
  }
}

vector<int>pathInATree(TreeNode* root, int target) {
  vector<int>ds;
  helper(root, target, ds);
  return ds;
}

int main() {

  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right = new TreeNode(3);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(7);

  vector<int>path = pathInATree(root, 5);

  for (auto x : path) {
    cout << x << " ";
  }
  return 0;
}