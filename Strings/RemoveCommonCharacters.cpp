class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        
        for(int i=0;i<s1.length();i++){
            mp1[s1[i]]++;
        }
        
        for(int i=0;i<s2.length();i++){
            mp2[s2[i]]++;
        }
        
        string res = "";
        for(auto it : s1){
            if(mp2.find(it) == mp2.end()){
                res += it;
            }
        }
        for(auto it : s2){
            if(mp1.find(it) == mp1.end()){
                res += it;
            }
        }
        
        if(res.length() == 0){
            return "-1";
        }
        else{
            return res;
        }
    }
};