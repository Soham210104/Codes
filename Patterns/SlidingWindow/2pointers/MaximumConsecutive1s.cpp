class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int k) {
        // code here
        int l=0,r=0,maxLen=0,zeroCnt=0;
        while(r<n){
            if(arr[r] == 0) zeroCnt++;
            while(zeroCnt > k){
                if(arr[l] == 0) zeroCnt--;
                l++;
            }
            if(zeroCnt <= k)
            {
                maxLen = max(maxLen,r-l+1);
            }
            r++;
        }
        
        return maxLen;
    }  
};
//TC OF ABOVE CODE IS O(N + N(inner while))

//To optimized and make it O(N)

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int k) {
        // code here
        int l=0,r=0,maxLen=0,zeroCnt=0;
        while(r<n){
            if(arr[r] == 0) zeroCnt++;
            if(zeroCnt > k){
                if(arr[l] == 0) zeroCnt--;
                l++;
            }
            if(zeroCnt <= k)
            {
                maxLen = max(maxLen,r-l+1);
            }
            r++;
        }
        
        return maxLen;
    }  
};