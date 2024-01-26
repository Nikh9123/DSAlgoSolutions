/*
& https://leetcode.com/problems/binary-tree-maximum-path-sum/

Input: root = [-10,9,20,null,null,15,7]
Output: 42
Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.

*/
/*
GitHub Copilot
The intuition behind this algorithm is to find the maximum path sum in a binary tree, where a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain at least one node and does not need to go through the root.

The algorithm uses a depth-first search (DFS) strategy and computes two values for each node:

The maximum path sum that includes the current node and one of its subtrees (if any). This is computed as the maximum of the maximum path sums of the left and right subtrees (if they exist) plus the value of the current node. If the maximum path sum of a subtree is negative, it is ignored (i.e., treated as 0). This value is returned by the getPathSum function.

The maximum path sum that includes the current node and both its subtrees (if they exist). This is computed as the maximum path sum of the left subtree plus the maximum path sum of the right subtree plus the value of the current node. If the maximum path sum of a subtree is negative, it is ignored (i.e., treated as 0). This value is used to update the maximum path sum found so far (maxi).

The algorithm starts with the root of the tree and recursively computes the maximum path sums for all nodes in the tree. The maximum path sum found during these computations is the maximum path sum in the tree.

The time complexity of the algorithm is O(N), where N is the number of nodes in the tree, because each node is visited once. The space complexity is O(H), where H is the height of the tree, because of the space required by the call stack for the recursive calls.


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