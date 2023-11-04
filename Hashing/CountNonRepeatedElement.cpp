class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second == 1)
            {
                count++;
            }
        }
        return count;
    }

};