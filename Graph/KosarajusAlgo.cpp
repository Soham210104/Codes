class Solution {
public:
    // Function to perform DFS and fill the stack with finishing times.
    void dfs(int node, vector<int>& vis, vector<vector<int>>& adj, stack<int>& st) {
        vis[node] = 1;
        
        for(auto it : adj[node]) {
            if(!vis[it]) {
                dfs(it, vis, adj, st);
            }
        }
        st.push(node);
    }
    
    // Function to perform DFS on the reversed graph.
    void dfs2(int node, vector<int>& vis, vector<vector<int>>& adjRev) {
        vis[node] = 1;
        
        for(auto it : adjRev[node]) {
            if(!vis[it]) {
                dfs2(it, vis, adjRev);
            }
        }
    }
    
    int kosaraju(int V, vector<vector<int>>& adj) {
        vector<int> vis(V, 0);
        stack<int> st;
        
        // Step 1: Perform DFS to sort by finishing times.
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, vis, adj, st);
            }
        }
        
        // Step 2: Reverse the graph.
        vector<vector<int>> adjRev(V);
        for(int i = 0; i < V; i++) {
            for(auto it : adj[i]) {
                adjRev[it].push_back(i);
            }
        }
        
        // Step 3: Perform DFS on the reversed graph to find SCCs.
        fill(vis.begin(), vis.end(), 0); // Reset the visited array.
        int count = 0;
        
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            if(!vis[node]) {
                count++;
                dfs2(node, vis, adjRev);
            }
        }
        
        return count;
    }
};
