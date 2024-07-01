class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    int inDegree[V] = {0};
	    
	    //i will iterate for all vertices and inner loop will iterate for
	    //adjacent vertice of the i.
	    for(int i=0;i<V;i++){
	        for(auto it : adj[i]){
	            inDegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        if(inDegree[i] == 0){
	            q.push(i);
	        }
	    }
	    
	    vector<int> res;
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        res.push_back(node);
	        
	        for(auto it:adj[node]){
	            inDegree[it]--;
	            if(inDegree[it] == 0){
	                q.push(it);
	            }
	        }
	    }
	    
	    return res;
	}
};