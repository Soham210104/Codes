class Solution {
  public: 
    const int MOD = 1000000007;
    int Maximize(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        
        long long sum = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            sum = (sum + (long long)arr[i] * i) % MOD;
        }
        
        return sum;
    }
};