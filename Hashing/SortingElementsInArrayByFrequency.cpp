class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    bool static cmp(pair<int,int> &a,pair<int,int> &b)
    {
        if(a.second == b.second)
        {
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        vector<pair<int,int>>ans;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
           ans.push_back({arr[i],mp[arr[i]]});
        }
        sort(ans.begin(),ans.end(),cmp);//cmpp sorts under the condition whose count is greater
        
      vector<int> result; // Create a vector to store the sorted elements
        for (int i=0;i<n;i++)
        {
            result.push_back(ans[i].first);
        }

        return result; // Return the sorted vector
        
    }
};