class Solution {
public:
    int getMinDiff(int arr[], int n, int k) {
        if (n == 1)
            return 0;
            
        sort(arr, arr + n);
        int ans = arr[n-1] - arr[0];
        
        int smallest = arr[0] + k;
        int largest = arr[n-1] - k;
        

        for (int i = 0; i < n - 1; i++) {
            int mn = min(smallest, arr[i+1] - k);
            int mx = max(largest, arr[i] + k);
            
            if (mn < 0)
                continue;
            
            ans = min(ans, mx - mn);
        }
        
        return ans;
    }
};