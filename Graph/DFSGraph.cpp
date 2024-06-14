class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFSrec(vector<int> adj[],vector<int> &ans,bool vis[],int s)
    {
        vis[s] = true;
        ans.push_back(s);
        
        for(int u:adj[s]){
            if(vis[u] == false){
                DFSrec(adj,ans,vis,u);
            }
        }
    }
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        bool vis[V];
        
        for(int i=0;i<V;i++)
        {
            vis[i] = false;
        }
        
        DFSrec(adj,ans,vis,0);
    return ans;
    }
    
};