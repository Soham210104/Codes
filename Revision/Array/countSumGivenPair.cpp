class Solution {
  public:
    int getPairsCount(const vector<int>& arr, int k) {
        // code here
        int count = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            int b = k - arr[i];
            
            if(mp.find(b) != mp.end()){
                count += mp[b];
            }
            mp[arr[i]]++;
        }
        
        return count;
    }
};