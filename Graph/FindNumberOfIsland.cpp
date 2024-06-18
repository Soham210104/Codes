class Solution {
  public:
    // Function to find the number of islands.
    
    void bfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& grid){
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n = grid.size();
        int m = grid[0].size();
        
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for(int drow = -1;drow<=1;drow++){
                for(int dcol=-1;dcol<=1;dcol++){
                    int nrow = r + drow;
                    int ncol = c + dcol;
                    
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol] != 1 && grid[nrow][ncol] == '1'){
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    bfs(i,j,vis,grid);
                    count++;
                }
            }
        }
        
        return count;
        
    }
};