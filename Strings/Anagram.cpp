class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        bool ans = true;
        map<char,int> mp1;
        map<char,int> mp2;
        
        if(a.length() != b.length()) return false;
        
        for(int i=0;i<a.length();i++){
            mp1[a[i]]++;
            mp2[b[i]]++;
        }
        
       if (mp1.size() != mp2.size()) return false;

        for (auto it1 = mp1.begin(); it1 != mp1.end(); ++it1) {
            if (mp2.find(it1->first) == mp2.end() || mp2[it1->first] != it1->second) {
                return false;
            }
        }

        return true;
    }
};