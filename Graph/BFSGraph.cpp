class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V] = {false};
        for(int i=0;i<V;i++)
        {
            visited[i] = false;
        }
        
        queue<int> q;
        vector<int> res;
        visited[0] = true;
        q.push(0);
        
        while(!q.empty())
        {
            int c = q.front();
            q.pop();
            res.push_back(c);
            for(int v : adj[c])
            {
                if(!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        
        return res;
    }
};