class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int node,stack<int> &s,int vis[],vector<int> adj[]){
	    vis[node] = 1;
	    for(auto it:adj[node]){
	        if(!vis[it]){
	            dfs(it,s,vis,adj);
	        }
	    }
	    s.push(node);
	}
	
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	   int vis[V] = {0};
	   stack<int> s;
	   
	   for(int i=0;i<V;i++){
	       if(!vis[i]){
	           dfs(i,s,vis,adj);
	       }
	   }
	   
	   vector<int> res;
	   while(!s.empty()){
	       int node = s.top();
	       s.pop();
	       res.push_back(node);
	   }
	   
	   
	   return res;
	}
};