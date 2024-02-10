#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
  TreeNode* left;
  TreeNode* right;

  int val;

  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {};
};

class Solution {
public:
  void helper(TreeNode* root, vector<int>& ds, vector<vector<int>>& ans) {
    if (!root) return;
    ds.push_back(root->val);
    if (root->left == nullptr && root->right == nullptr) {
      ans.push_back(ds);
    }
    else {
      helper(root->left, ds, ans);
      helper(root->right, ds, ans);
    }
    ds.pop_back();
  }

  vector<string> binaryTreePaths(TreeNode* root) {
    vector<vector<int>> ans;
    vector<int> ds;
    helper(root, ds, ans);

    vector<string> res;
    for (auto& path : ans) {
      string s;
      for (int i = 0; i < path.size(); i++) {
        s += to_string(path[i]);
        s += (i == path.size() - 1) ? "" : "->"; //if i is the last element then don't add -> else add ->
      }
      res.push_back(s);
    }
    return res;
  }
};

int main() {
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right = new TreeNode(3);

  Solution s;
  vector<string>paths = s.binaryTreePaths(root);

  for (auto path : paths) {
    cout << path << endl;
  }

  return 0;
}