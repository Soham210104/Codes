// Given an array A[] of N positive integers which can contain integers from 1 to P where elements can be repeated or 
// can be absent from the array. Your task is to count the frequency of all elements from 1 to N.
// Note: The elements greater than N in the array can be ignored for counting and do modify the array in-place.

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int P)
    { 
        // code here
        for(int i=0;i<n;i++)
        {
            arr[i]--; //decrement the value of array elements each by 1
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%P<n)
            {
            arr[arr[i]%P] =  arr[arr[i]%P]+P; //at the index we are adding the value n
            }
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i] = arr[i]/P; //dividing by P so we can get the final result
        }
    }
};