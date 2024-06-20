class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        int count = 0;
        vector<int> vis(V,false);
        for(int i=0;i<=V;i++){
            if(i==source){
                dfs(adj,source,destination,vis,count);
            }
        }
        
        return count;
    }
    
    
    void dfs(vector<int> adj[],int node,int dest,vector<int> vis,int& count){
        
        if(node==dest){
            count++;
            vis[dest] = false;
            return;
        }
        
        vector<int> v = adj[node];
        
        for(int neigh : v){
            
            if(!vis[neigh])
            {
                vis[neigh] = true;
                dfs(adj,neigh,dest,vis,count);
            }
        }
        
        vis[node] = false;
    }
};