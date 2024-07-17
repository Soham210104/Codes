class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int> mp;
        
        for(int i=0;i<str.size();i++){
            char c = str[i];
            mp[c]++;
        }
        
        char maxChar = 'a';
        int maxCount = 0;
        auto it = mp.begin();
        for(; it != mp.end();it++){
            if((it->second > maxCount) || (it->second == maxCount && it->first < maxChar)){
                maxCount = it->second;
                maxChar = it->first;
            }
        }
        return maxChar;
    }

};