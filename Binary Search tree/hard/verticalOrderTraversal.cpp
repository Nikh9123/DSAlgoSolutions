#include<bits/stdc++.h>
using namespace std;

//* Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(NULL), right(NULL) {}
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};

//multiset is used to store the nodes at a particular level and vertical distance from root

class Solution {
public:
  vector<vector<int>> verticalTraversal(TreeNode* root) {
    map<int, map<int, multiset<int>>> nodes; // {vertical, {level, {nodes}}}
    queue<pair<TreeNode*, pair<int, int>>> todo; // node , {vertical, level}
    todo.push({ root, {0, 0} });

    while (!todo.empty()) {
      auto p = todo.front();
      todo.pop();
      cout << p.first->val << " " << p.second.first << " " << p.second.second << endl;
      TreeNode* node = p.first; //* this s the node we are currently processing
      int x = p.second.first, y = p.second.second; //* x is the vertical distance from root, y is the level of the node
      nodes[x][y].insert(node->val); //* insert the node in the multiset of the vertical x and level y

      if (node->left) {
        todo.push({ node->left, {x - 1, y + 1} }); //* push the left child with vertical x-1 and level y+1
      }
      if (node->right) {
        todo.push({ node->right, {x + 1, y + 1} }); //* push the right child with vertical x+1 and level y+1
      }
    }
    //after level order traversal, we have all the nodes in the map with their vertical and level
    vector<vector<int>> ans;

    for (auto p : nodes) {
      vector<int> col;
      for (auto q : p.second) {
        col.insert(col.end(), q.second.begin(), q.second.end()); //* insert all the nodes in the multiset of the vertical x and level y
      }
      ans.push_back(col);
    }
    return ans;
  }
};


int main() {
  TreeNode* root = new TreeNode(1);

  root->left = new TreeNode(2);
  root->left->right = new TreeNode(10);
  root->left->left = new TreeNode(4);
  root->left->left->right = new TreeNode(5);
  root->left->left->right->right = new TreeNode(6);

  root->right = new TreeNode(3);
  root->right->left = new TreeNode(9);
  root->right->right = new TreeNode(10);

  Solution s;
  vector<vector<int>> ans = s.verticalTraversal(root);
  for (auto i : ans) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
}