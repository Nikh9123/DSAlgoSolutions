#include<bits/stdc++.h>
using namespace std;

//return a graph function
unordered_map<int, vector<int>> getGraph(vector<vector<int>>& nums) {
  int n = nums.size();

  unordered_map<int, vector<int>> adj;
  //first -> vertices , vector<int> -> all the connected nodes

  for (int i = 0; i < n; i++) {
    
    int vertex = nums[i][0];
    int node = nums[i][1];

    adj[vertex].push_back(node);
  }
  return adj;
}

int main() {
  //graph input 
  int n, m; // n-> no of vertices , m-> no of edges
  n = 4, m = 4;
  vector<vector<int>> ajd = { {0,1},{2, 0},{2,1},{3,1} }; // adjacency list
  //0--edge-->1 , 2--edge-->0, 2--edge-->1, 3--edge-->1
}