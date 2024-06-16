class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int n = N;
	    int tx = TargetPos[0]-1, ty = TargetPos[1]-1;
	    int x1 = KnightPos[0]-1, y1 = KnightPos[1]-1;
	    
	    if(x1 == tx && y1 == ty) return 0;
	    
	    vector<vector<bool>> vis(n,vector<bool>(n,false));
	    
	    queue<pair<int,int>> q;
	    q.push({x1,y1});
	    
	    int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
        int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
	    
	    int ans = 0;
	    while(!q.empty()){
	        int size = q.size();
	        ans++;
	        
	        while(size != 0){
	            pair<int,int>p = q.front();
	            q.pop();
	            
	            int row = p.first;
	            int col = p.second;
	            
	            for(int i=0;i<8;i++)
	            {
	                int nx = row + dx[i];
	                int ny = col + dy[i];
	                
	                if(nx == tx && ny ==ty) return ans;
	                
	                if(nx>=0 && ny>=0 && nx<n && ny<n &&vis[nx][ny] == false)
	                {
	                    q.push({nx,ny});
	                    vis[nx][ny] = true;
	                }
	            }
	            
	            size--;
	        }
	    }
	    return ans;
	}
};