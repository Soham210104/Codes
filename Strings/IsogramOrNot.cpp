class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        unordered_map<char,int> mp;
        
        for(char c : s){
            mp[c]++;
        }
        
        for(auto it:mp){
            if(it.second > 1){
                return false;
            }
        }
        
        return true;
    }
};