// You are given an array of size n. Find the maximum possible length 
// of a subarray such that its elements are arranged alternately either as even and odd or odd and even .

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
       //Your code here
       int res=1,curr=1;
            for(int i=1;i<n;i++)
            {
                if((arr[i]%2 == 0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
                {
                    curr++;
                    res = max(curr,res);
                }
                else
                {
                    curr = 1;
                }
            }
       
       return res;
    } 
};