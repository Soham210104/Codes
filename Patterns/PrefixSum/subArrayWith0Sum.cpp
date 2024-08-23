class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int preSum = 0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            preSum += arr[i];
            
            if(preSum == 0) return true;
            if(mp.find(preSum) != mp.end()){
                return true;
            }
            mp[preSum]++;
        }
        
        return false;
    }
};