class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        vector<int> v(256,-1);
        int l=0,r=0,maxLen=INT_MIN,len=0;
        int n = s.length();
        while(r<n){
            
            if(v[s[r]] != -1){
                if(v[s[r]] >= l){
                    l = v[s[r]] + 1;
                }
            }
            
            len = r - l + 1;
            maxLen = max(maxLen,len);
            v[s[r]] = r;
            r++;
        }
        
        return maxLen;
    }
};