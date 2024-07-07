class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void bfs(int row,int column,vector<vector<int>> &grid,vector<vector<int>> &vis,int& count){
        vis[row][column] = 1;
        queue<pair<int,int>> q;
        q.push({row,column});
        int n=grid.size();
        int m=grid[0].size();
        
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for(int drow = -1;drow<=1;drow++){
                for(int dcol=-1;dcol<=1;dcol++){
                    int nrow = r + drow;
                    int ncol = c + dcol;
                    
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol] != 1 && grid[nrow][ncol] == 1){
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                        count++;
                    }
                }
            }
        }
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n= grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int maxCount = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    int count = 1;
                    bfs(i,j,grid,vis,count);
                    maxCount = max(count,maxCount);
                }
            }
        }
        
        return maxCount;
    }
};