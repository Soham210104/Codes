class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        //Your code here
        int fIndex[256];
        fill(fIndex,fIndex+256,-1);
        int res = INT_MAX;
        
        for(int i=0;i<s.length();i++){
            int fi = fIndex[s[i]];
            if(fi==-1){
                fIndex[s[i]] = i;
            }
            else{
                res = min(res,fi);
            }
        }
        
        return (res==INT_MAX)?-1:res;
    } 
};