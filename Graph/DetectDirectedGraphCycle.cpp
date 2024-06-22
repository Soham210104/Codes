class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool detect(int src,vector<int> adj[],int vis[],int pathVis[]){
        vis[src] = 1;
        pathVis[src] = 1;
        for(auto it:adj[src]){
            if(!vis[it]){
                if(detect(it,adj,vis,pathVis) == true) return true;
            }
            else if(pathVis[it]){
                return true;
            }
        }
        
        pathVis[src] = 0;
        
        
        return false;
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V] = {0};
        int pathVis[V] = {0};
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detect(i,adj,vis,pathVis) == true){
                    return true;
                }
            }
        }
        return false;
    }
};