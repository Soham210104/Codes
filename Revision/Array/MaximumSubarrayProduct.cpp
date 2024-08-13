class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    if(n==1) return arr[0];
	    long long product = 1;
	    long long maxP = INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        product = 1;
	        for(int j=i;j<n;j++){
	            product *= arr[j];
	            maxP = max(maxP,product);
	        }
	    }
	    
	    return maxP;
	}
};