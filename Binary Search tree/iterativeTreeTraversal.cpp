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

// Class to perform tree traversals
class Traversal {
public:
  // Function to perform postorder traversal
  vector<int> postorderTraversal(TreeNode* root) {
    stack<TreeNode*>st;  // Stack to keep track of nodes to visit
    vector<int>postorder;  // Vector to store the postorder traversal

    TreeNode* temp = root;  // Start from the root
    while (temp != NULL) {  // While there are nodes to visit
      // If the node has no left child, add it to the postorder traversal
      if (temp->left == NULL) {
        cout << "temp->val " << temp->val <<endl;
        postorder.push_back(temp->val);
      }
      // If the node has no right child, add it to the postorder traversal
      if (temp->right == NULL) {
        cout<<"temp->val in right "<<temp->val<<endl;
        postorder.push_back(st.top()->val);
        temp = st.top()->right;
        st.pop();
      }
      // Push the current node to the stack and move to the left child
      st.push(temp);
      temp = temp->left;
    }
    return postorder;  // Return the postorder traversal
  }

  // Function to perform preorder traversal
  vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode*> st;  // Stack to keep track of nodes to visit
    vector<int>ans;  // Vector to store the preorder traversal
    st.push(root);  // Start from the root

    while (!st.empty()) {  // While there are nodes to visit
      TreeNode* temp = st.top();  // Get the top node from the stack
      ans.push_back(st.top()->val);  // Add the top node to the preorder traversal
      st.pop();  // Remove the top node from the stack

      // If the node has a right child, push it to the stack
      if (temp->right != NULL) {
        st.push(temp->right);
      }

      // If the node has a left child, push it to the stack
      if (temp->left != NULL) {
        st.push(temp->left);
      }
    }
    return ans;  // Return the preorder traversal
  }
};

int main() {
  // Create a binary tree
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);
  root->left->right->left = new TreeNode(6);
  root->left->right->right = new TreeNode(7);

  Traversal t;  // Create a Traversal object
  // Perform the traversals and store the results
  vector<int>preorder = t.preorderTraversal(root);
  vector<int>postorder = t.postorderTraversal(root);

  // Print the postorder traversal
  for (auto x : postorder) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}