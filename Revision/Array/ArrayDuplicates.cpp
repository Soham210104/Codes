class Solution {
  public:
    vector<int> duplicates(vector<long long> arr) {
        // code here
        vector<int> res;
        map<long long,long long> mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        for(auto it : mp){
            if(it.second > 1){
                res.push_back(it.first);
            }
        }
        
        if(res.size() == 0) return {-1};
        
        return res;
    }
};