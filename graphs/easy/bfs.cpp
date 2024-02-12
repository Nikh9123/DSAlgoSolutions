#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    //time complexity : O(V+E)
    void BFS(unordered_map<int,vector<int>>& adj, int vertex, vector<bool>& visited, vector<int>& result){
        queue<int>que ;
        
        que.push(vertex);
        visited[vertex] = true ;
        result.push_back(vertex) ;
        
        while(!que.empty()){
            int vertex = que.front() ;
            que.pop() ;
            
            for(int &node : adj[vertex]){
                if(!visited[node]){
                    visited[node] = true ;
                    que.push(node) ;
                    result.push_back(node) ;
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> mp[]) {
        // Code here V --> no of vertices
        //vector<int>mp[] //vector of array also represent the graph
        
        unordered_map<int, vector<int>>adj ;
        //converting list to map for understanding purpose
        for(int vertex = 0 ; vertex < V ; vertex++){
            
            for(auto node = mp[vertex].begin(); node != mp[vertex].end() ; node++){
              cout<<"*node : "<<*node<<endl;
                adj[vertex].push_back(*node) ;
            }
        }
        
        vector<int>result ;
        vector<bool>visited(V , false) ;
        
        BFS(adj, 0,visited, result) ;
        
        return result ;
        
    }
};
int main() {
    // Example usage of the dfsOfGraph function
    Solution sol;
    int V = 5;  // Number of vertices
    
    //array of vector also represent the graph
    vector<int> mp[] = {{1, 2}, {0, 2, 3}, {0, 1, 3}, {1, 2, 4}, {3}};  // Adjacency list representation

    vector<int> result = sol.bfsOfGraph(V, mp);

    // Print the result of DFS traversal
    cout << "BFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}