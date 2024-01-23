/*
& https://leetcode.com/problems/binary-tree-maximum-path-sum/

Input: root = [-10,9,20,null,null,15,7]
Output: 42
Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.

*/
#include<bits/stdc++.h>
using namespace std;

// Define the structure for a tree node
struct TreeNode {
  int val;  // Value of the node
  TreeNode* left;  // Pointer to the left child
  TreeNode* right;  // Pointer to the right child
  // Constructors for the TreeNode
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // Function to find the maximum path sum
    int getPathSum(TreeNode* root, int& maxi){
        // If the node is null, return 0
        if(root == NULL) return 0 ;
        
        // Recursively find the maximum path sum in the left and right subtrees
        int leftSum = max(0, getPathSum(root->left, maxi)) ;
        int rightSum = max(0, getPathSum(root->right, maxi)) ;

        // Update the maximum path sum
        maxi = max(maxi,( root->val + leftSum+ rightSum )) ;

        // Return the maximum path sum that includes the current node
        return (root->val + max(leftSum, rightSum)) ;
    }

    // Function to find the maximum path sum in a binary tree
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN ;  // Initialize the maximum path sum
        getPathSum(root, maxi) ;  // Find the maximum path sum
        return maxi ;  // Return the maximum path sum
    }
};

int main() {
  // Create a binary tree
  TreeNode* root = new TreeNode(-10);
  root->left = new TreeNode(9);
  root->right = new TreeNode(20);
  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);

  Solution s;  // Create a Solution object
  // Find the maximum path sum in the binary tree
  int ans = s.maxPathSum(root);

  // Print the result
  cout << "Maximum Path Sum is: " << ans << endl;

  return 0;
}