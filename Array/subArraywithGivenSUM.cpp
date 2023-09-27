class Solution
{
public:
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        
        int left = 0;
        int right = 0;
        int sum = 0;
        
        if(s == 0)
        {
            return {-1};
        }
        while (right < n)
        {
            sum += arr[right];

            while (sum > s)
            {
                /*subtracting the element means shrinking the window size 
                until its sum is less than equal to the finding sum*/
                sum -= arr[left];
                left++;//to start the window from next
            }

            if (sum == s)
            {
               
                return{left+1,right+1}; 
            }

            right++;
        }

        return {-1};
    }
};
