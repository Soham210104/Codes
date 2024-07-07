class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int sum = 0;
        vector<int> vis(V,0);
        //wt,node
        pq.push({0,0});//we just need the sum of wts,so we dont need parent
        //when they asked to get MST then we will need parent
        
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            
            int node = it.second;
            int wt = it.first;
            
            if(vis[node] == 1) continue; //if the node is already visited
            
            //this is where we add to the mst
            vis[node] = 1;//if not visited we make it visited
            sum += wt;
            
            for(auto it : adj[node]){
                int adjNode = it[0];
                int edgeWt = it[1];
                
                //if the adjacent node is not the part of the mst
                if(!vis[adjNode]){
                   pq.push({edgeWt,adjNode}); 
                }
            
            }
        }
        
        return sum;
    }
};