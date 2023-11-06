class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<N;i++)
        {
            mp[A1[i]]++;
        }
        for(int i=0;i<M;i++)
        {
            while(mp[A2[i]]!=0)
            {
                ans.push_back(A2[i]);
                --mp[A2[i]];
            }
            mp[A2[i]] = 0;
        }
        for(auto it = mp.begin(); it != mp.end(); it++) 
        {
            while(it->second != 0) 
            {
                ans.push_back(it->first);
                it->second--;
            }
        }
        return ans;
        // for(auto &x : mp)
        // {
        //     while(x.second--)
        //     {
        //         ans.push_back(x.first);
        //     }
        // }
        // return ans;
    } 
};