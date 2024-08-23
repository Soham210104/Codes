class Solution{
    public:
    int findSubArraySum(int arr[], int N, int k)
    {
        // code here
        int preSum = 0,count = 0;
        map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<N;i++){
            preSum += arr[i];
            int rem = preSum - k;
            if(mp.find(rem) != mp.end()){
                count += mp[rem];
            }
            
            mp[preSum]++;
        }
        
        return count;
    }
};