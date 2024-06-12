class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>> v(V);
        for(int i=0;i<edges.size();i++)
        {
            v[edges[i].first].push_back(edges[i].second);
            v[edges[i].second].push_back(edges[i].first);
        }
        
        return v;
    }
};
