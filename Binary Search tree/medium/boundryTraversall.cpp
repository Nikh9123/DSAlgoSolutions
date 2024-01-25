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
    // Function to check if a node is a leaf node
    bool isLeaf(TreeNode* root) {
      if (!root->left and !root->right) return true;
      else return false;
    }

    // Function to add left boundary nodes to the result
    void addLeftBoundry(TreeNode* root, vector<int>& res) {
      TreeNode* curr = root->left;
      while (curr) {
        if (!isLeaf(curr)) {
          res.push_back(curr->val);
        }
        if (curr->left) curr = curr->left;
        else curr = curr->right;
      }
    }

    // Function to add right boundary nodes to the result
    void addRightBoundry(TreeNode* root, vector<int>& res) {
      TreeNode* curr = root->right;
      vector<int>temp;
      while (curr) {
        if (!isLeaf(curr)) temp.push_back(curr->val);

        if (curr->right) curr = curr->right;
        else curr = curr->left;
      }

      // Add the right boundary nodes in reverse order
      for (int i = temp.size() - 1; i >= 0; --i) {
        res.push_back(temp[i]);
      }
    }

    // Function to add leaf nodes to the result
    void addLeafNode(TreeNode* root, vector<int>& res) {
      if (isLeaf(root)) {
        res.push_back(root->val);
        return;
      }
      if (root->left) addLeafNode(root->left, res);
      if (root->right) addLeafNode(root->right, res);
    }

  public:
    // Function to print the boundary of a binary tree
    vector<int> printBoundry(TreeNode* root) {
      vector<int>res;
      if (!root) return res;
      if (!isLeaf(root)) res.push_back(root->val);

      // Add left boundary nodes excluding leaf nodes
      addLeftBoundry(root, res);
      // Add leaf nodes
      addLeafNode(root, res);
      // Add right boundary nodes
      addRightBoundry(root, res);

      return res;
    }
};

int main() {
  // Construct the binary tree
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->left = new TreeNode(3);
  root->left->left->right = new TreeNode(4);
  root->left->left->right->left = new TreeNode(5);
  root->left->left->right->right = new TreeNode(6);

  root->right = new TreeNode(7);
  root->right->right = new TreeNode(8);
  root->right->right->left = new TreeNode(9);
  root->right->right->left->left = new TreeNode(10);
  root->right->right->left->right = new TreeNode(11);

  // Create the solution object and print the boundary
  Solution s;
  vector<int>boundryTraversal = s.printBoundry(root);

  for (auto x : boundryTraversal) {
    cout << x << " ";
  }
  return 0;
}