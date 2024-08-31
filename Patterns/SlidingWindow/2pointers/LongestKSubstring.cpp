class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int l=0,r=0,n=s.length(),maxLen = 0;
        map<int,int> mp;
        while(r<n){
            mp[s[r]]++;
            
            if(mp.size() > k){
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l++;
            }
            
            maxLen = max(maxLen,r-l+1);
            r++;
        }
        
        if(mp.size() < k) return -1;
        return maxLen;
    }
};