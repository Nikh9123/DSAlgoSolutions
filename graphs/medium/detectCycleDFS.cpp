#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    //using dfs
    bool isCyclicHelper(vector<int> adj[], int start, int visited[], int parent) {
    if (visited[start]) return true;

    visited[start] = 1;

    for (auto adjacentNode : adj[start]) {
        if (adjacentNode == parent) continue;

        bool cycle = isCyclicHelper(adj, adjacentNode, visited, start); // Remove extra parenthesis
        if (cycle) {
            return true;
        }
    }
    return false;
}

public:
    // Function to detect cycle in an undirected graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int visited[V] = {0};
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (isCyclicHelper(adj, i, visited, -1)) {
                    return true;
                }
            }
        }
        return false;
    }

};

int main(){
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    bool ans = obj.isCyclic(V, adj);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}