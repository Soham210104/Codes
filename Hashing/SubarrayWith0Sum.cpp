class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int N)
    {
        //Your code here
        unordered_set<int> sumSet;
 
    // Traverse through array
    // and store prefix sums
        int sum = 0;
        for (int i = 0; i < N; i++) 
        {
        sum += arr[i];
 
        if (sum == 0 || sumSet.find(sum) != sumSet.end())
            return true;
 
        sumSet.insert(sum);
        }
    return false;
    }
};