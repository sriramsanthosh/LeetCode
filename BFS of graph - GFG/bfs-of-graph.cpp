//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    void SingleComponentsBFS(int V, vector<int> adj[], map<int, bool>& visited, vector<int>& ans, int& st){
        queue<int> q;
        q.push(st);
        visited[st] = true;
        while(q.empty() == false){
            int top = q.front();
            ans.push_back(top);
            q.pop();
            for(int i = 0; i<adj[top].size(); i++){
                if(visited[adj[top][i]] == false){
                    q.push(adj[top][i]);
                    visited[adj[top][i]] = true;
                }
            }
        }
        
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        map<int, bool> visited;
        // for(int i = 0; i<V; i++){
            // if(visited[i] == false){
            int index = 0;
                SingleComponentsBFS(V, adj, visited, ans, index);
            // }
        // }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends