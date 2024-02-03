#include<bits/stdc++.h>
using namespace std;

class Solution {
  private:
  // Function to check if a cycle exists in the graph using DFS
  bool isCyclicHelper(vector<int> adj[], int start, int visited[], int parent) {
    // If the current node is visited, then a cycle exists
    if (visited[start]) return true;

    // Mark the current node as visited
    visited[start] = 1;

    // Iterate over all adjacent nodes
    for (auto adjacentNode : adj[start]) {
      // If the adjacent node is the parent, ignore it
      if (adjacentNode == parent) continue;

      // Recursively call the function for the adjacent node
      bool cycle = isCyclicHelper(adj, adjacentNode, visited, start);
      // If a cycle is found, return true
      if (cycle) {
        return true;
      }
    }
    // If no cycle is found, return false
    return false;
  }

public:
  // Function to detect cycle in an undirected graph.
  bool isCyclic(int V, vector<int> adj[]) {
    // Initialize visited array with 0s
    int visited[V] = {0};
    // Iterate over all nodes
    for (int i = 0; i < V; i++) {
      // If the node is not visited, call the helper function
      if (!visited[i]) {
        if (isCyclicHelper(adj, i, visited, -1)) {
          // If a cycle is found, return true
          return true;
        }
      }
    }
    // If no cycle is found in any component, return false
    return false;
  }

};

int main(){
  // Read the number of vertices and edges
  int V, E;
  cin >> V >> E;

  // Initialize adjacency list
  vector<int> adj[V];

  // Read edges
  for (int i = 0; i < E; i++) {
    int u, v;
    cin >> u >> v;
    // Add edge to the adjacency list
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  // Create a Solution object
  Solution obj;

  // Call the isCyclic function
  bool ans = obj.isCyclic(V, adj);

  // Print the result
  if (ans)
    cout << "1\n"; // 1 means a cycle exists
  else
    cout << "0\n"; // 0 means no cycle exists

  return 0;
}