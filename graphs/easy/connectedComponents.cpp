/**
 *problem link -> https://leetcode.com/problems/number-of-provinces/description/
There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.

You are given an n x n matrix isConnected where isConnected{i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
Output: 2
*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  void BFS(unordered_map<int, vector<int>>& adj, int start, vector<bool>& visited) {
    visited[start] = true;
    queue<int> que;
    que.push(start);

    while (!que.empty()) {
      int node = que.front();
      que.pop();

      for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
          visited[neighbor] = true;
          que.push(neighbor);
        }
      }
    }
  }

  int findCircleNum(vector<vector<int>>& isConnected) {
    int n = isConnected.size();
    vector<bool> visited(n, false);
    unordered_map<int, vector<int>> adj;

    //convert matrix to graph
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i != j && isConnected[i][j] != 0) {
          adj[i + 1].push_back(j + 1);
          adj[j + 1].push_back(i + 1);
        }
      }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      if (!visited[i]) {
        BFS(adj, i, visited);
        cnt++;
      }
    }
    return cnt;
  }
};

int main() {
  vector<vector<int>>isConnected = { {1,1,0},{1,1,0},{0,0,1} };
  Solution s;
  cout << "connected components(cities) are : " << s.findCircleNum(isConnected);
}