#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Recursive DFS function to traverse the graph
  void DFS(unordered_map<int, vector<int>>& adj, int vertex, vector<int>& result, vector<bool>& visited) {
    // If the node is already visited, return
    if (visited[vertex] == true) return;

    // Mark the current node as visited and add it to the result
    visited[vertex] = true;
    result.push_back(vertex);

    // Recursively visit all neighbors of the current node
    for (int& node : adj[vertex]) {
      if (!visited[node]) {
        DFS(adj, node, result, visited);
      }
    }
  }

  // Function to return Depth First Traversal of the given graph.
  vector<int> dfsOfGraph(int V, vector<int> mp[]) {
    // Create an adjacency map for better representation of the graph
    unordered_map<int, vector<int>> adj;

    // Convert the given array representation of the graph to the map
    for (int vertex = 0; vertex < V; vertex++) {
      for (auto node = mp[vertex].begin(); node != mp[vertex].end(); node++) {
        adj[vertex].push_back(*node);
      }
    }

    // Vector to store the result of DFS traversal
    vector<int> result;

    // Vector to keep track of visited nodes
    vector<bool> visited(V, false);

    // Start DFS traversal from the first vertex (assuming the graph is connected)
    DFS(adj, 0, result, visited);

    // Return the result of DFS traversal
    return result;
  }
};

int main() {
  // Example usage of the dfsOfGraph function
  Solution sol;
  int V = 5;  // Number of vertices
  vector<int> mp[] = {{1, 2}, {0, 2, 3}, {0, 1, 3}, {1, 2, 4}, {3}};  // Adjacency list representation

  vector<int> result = sol.dfsOfGraph(V, mp);

  // Print the result of DFS traversal
  cout << "DFS Traversal: ";
  for (int node : result) {
    cout << node << " ";
  }

  return 0;
}
