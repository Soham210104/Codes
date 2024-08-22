class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int N, int k) 
    { 
        // Complete the function
        int maxLen = 0,sum=0;
        map<int,int> mp;
        
        for(int i=0;i<N;i++){
            sum += arr[i];
            
            if(sum == k){
             maxLen = max(maxLen,i+1);   
            }
            
            int rem = sum - k;
            if(mp.find(rem) != mp.end()){
                int len = i - mp[rem];
                maxLen = max(maxLen,len);
            }
            
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        
        return maxLen;
    } 

};


//THIS SOULTION WORKS WHEN ALL ARE POSITIVE ELEMENTS
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int N, int K) 
    { 
        int t1 = 0, t2 = 0;
        int sum = 0, len = 0;
        
        while(t2 < N){
            sum += arr[t2];
            
            while(sum > K && t1 <= t2){
                sum -= arr[t1];
                t1++;
            }
            
            if(sum == K){
                len = max(len, t2 - t1 + 1);
            }
            
            t2++;
        }
        
        return len;
    } 
};