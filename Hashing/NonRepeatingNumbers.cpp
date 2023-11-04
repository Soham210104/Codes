class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second == 1)
            {
                ans.push_back(it->first);
            }
        }
        
        return ans;
    }
};