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
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    
    vector<vector<int>>ans;
    // If the tree is empty, return an empty result
    if (root == nullptr) return ans;

    // Initialize a queue for BFS
    queue<TreeNode*>q;
    q.push(root);

    // Flag to control the direction of traversal
    bool leftToRight = true; //true = L -> R and false = R -> L

    // BFS
    while (!q.empty()) {
      int size = q.size();
      vector<int>rowNode(size);

      // Process each node in the current level
      for (int i = 0; i < size; i++) {
        TreeNode* temp = q.front();
        q.pop();

        // If leftToRight is true, insert at the end. Otherwise, insert at the beginning of queue .
        int index = leftToRight ? i : size - i - 1;
        rowNode[index] = temp->val;

        // Add the node's children to the queue for the next level
        if (temp->left != nullptr) {
          q.push(temp->left);
        }
        if (temp->right != nullptr) {
          q.push(temp->right);
        }
      }
      // Flip the direction for the next level
      leftToRight = !leftToRight;
      // Add the current level's result to the final result
      ans.push_back(rowNode);
    }
    // Return the final result
    return ans;
  }
};

int main() {
  // Construct the tree
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  root->right = new TreeNode(3);
  root->right->right = new TreeNode(6);

  Solution s;

  // Get the zigzag level order traversal
  vector<vector<int>> ans = s.zigzagLevelOrder(root);

  // Print the result
  for (auto x : ans) {
    for (auto y : x) {
      cout << y << " ";
    }
    cout << endl;
  }
  return 0;
}