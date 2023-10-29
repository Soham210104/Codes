// Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr)
    {
        // code here
        vector<int> count(26,0);
        for(int i=0;i<arr.size();i++)
        {
            count[arr[i]-'a']++;
        }
        for(int i=1;i<26;i++)
        {
            count[i]+=count[i-1];
        }
        string s(arr.length(),' ');
        for(int i=0;i<arr.size();i++)
        {
            int x = --count[arr[i]-'a'];
            s[x] = arr[i];
        }
        
        return s;
        
    }
};