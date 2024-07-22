class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string a)
    {
        // Your code here
        int ans=0,same=1;
        
        for(int i=1;i<a.length();i++){
            if(a[i] == a[i-1]){
                same++;
            }
            else{
                ans += (same-1)/2;
                same = 1;
            }
        }
        ans += (same-1)/2;
        
        return ans;
    }
};