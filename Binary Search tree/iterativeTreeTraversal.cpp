#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Traversal {
public:
  vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode*> st;
    vector<int>ans;
    st.push(root);//push first element 

    while (!st.empty()) {
      TreeNode* temp = st.top(); // store top in temp so that we can traverse it's left and right 
      ans.push_back(st.top()->val); //store the top of stack in ans and pop it
      st.pop(); //then pop it

      if (temp->right != NULL) { //push the node->right in stack 
        st.push(temp->right);
      }

      if (temp->left != NULL) { //push the node->left in stack //**we are pushing left after pushing right because we are storing these nodes in stack and  we have to traverse the left node first 
        st.push(temp->left);
      }
    }
    return ans;

  }
  
};

int main() {
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(7);

  root->left->left = new TreeNode(3);
  root->left->right = new TreeNode(4);

  root->left->right->left = new TreeNode(5);
  root->left->right->right = new TreeNode(6);

  Traversal t;
  vector<int>preorder = t.preorderTraversal(root);

  for (auto x : preorder) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}