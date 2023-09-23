// Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.


class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) 
    {
        // Your code here
        unordered_map<int,int> mpp;
        int x = n/k;
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second > x)
            {
                count++;
            }
        }
        return count;
    }
};