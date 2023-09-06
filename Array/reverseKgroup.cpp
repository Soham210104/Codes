class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverse(vector<long long>& arr,int n ,int low, int high)
    {
        while(low<high)
        {
            int temp=arr[high];
            arr[high] = arr[low];
            arr[low] = temp;
            low++;
            high--;
        }
    }
    
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        // code here
       for(int i=0;i<n;i+=k)
       {
           if(i+k-1<n)
           {
               reverse(arr,n,i,i+k-1);
           }
           else
           {
               reverse(arr,n,i,n-1); //passing last index if the limit has been crossed
           }
       }
    }
};