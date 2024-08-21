class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        map<int,int> mp;
        int count = 0;
        for(int i = 0;i<arr.size();i++){
            count = 0;
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j] == 1) {
                    count++;
                }
            }
            mp[i] = count;
        }
        
        int maxCount = INT_MIN;
        int maxElement = -1;
        
        for(auto it : mp){
            if(it.second > maxCount){
                maxCount = it.second;
                maxElement = it.first;
            }
        }
        
        if(maxCount == 0) return -1;
        
        return maxElement;
        
    }
};