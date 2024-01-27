#include<bits/stdc++.h>
using namespace std;

//* Definition for a binary tree node.
// struct ListNode{
//   int val ;
//   ListNode* left ;
//   ListNode* right ;
//   ListNode() : val(0), left(NULL), right(NULL) {}
//   ListNode(int x) : val(x), left(NULL), right(NULL) {}
//   ListNode(int x, ListNode* left, ListNode* right) : val(x), left(left), right(right) {}
// };

template <typename T>
class TreeNode
{
public:
  T data;
  TreeNode<T>* left;
  TreeNode<T>* right;

  TreeNode(T dat)
  {
    this->data = dat;
    left = NULL;
    right = NULL;
  }
};

//multiset is used to store the nodes at a particular level and vertical distance from root 
vector<int> getTopView(TreeNode<int>* root)
{
  // Write your code here.
  vector<int> ans; // to store the top view
  if (root == NULL)
  {
    return ans;
  }
  map<int, int> mpp; //* to store the vertical and the node value
  queue<pair<TreeNode<int>*, int>> q; //* to store the node and its vertical from root

  q.push({ root, 0 });//* push the root node with vertical 0
  while (!q.empty()) {
    auto it = q.front();//* it is the node and its vertical from root
    q.pop();
    TreeNode<int>* currNode = it.first;//* currNode is the current node we are processing
    int currVertical = it.second;//* currVertical is the vertical of the current node from root

    //check in the map that if the current vertical is present or not
    if (mpp.find(currVertical) == mpp.end()) {
      mpp[currVertical] = currNode->data;//* if not present then insert the node value in the map
    }

    //push the left child with vertical currVertical-1
    if (currNode->left) {
      q.push({ currNode->left, currVertical - 1 });
    }
    if (currNode->right) {
      q.push({ currNode->right, currVertical + 1 });
    }
  }

  //now we have all the nodes in the map with their vertical distance from root
  for (auto it : mpp) {
    ans.push_back(it.second);//* push the node value in the ans vector
  }
  return ans;

}


int main() {
  TreeNode<int>* root = new TreeNode<int>(1);
  root->left = new TreeNode<int>(2);
  root->right = new TreeNode<int>(3);

  root->left->left = new TreeNode<int>(4);
  root->left->right = new TreeNode<int>(5);
  root->left->right->left = new TreeNode<int>(6);

  root->right->right = new TreeNode<int>(7);

  vector<int> ans = getTopView(root);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

}