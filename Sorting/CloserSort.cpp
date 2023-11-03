class Solution{
  public:

    // arr[]: input array
    // n: size of array
    // x: element to find index
    //Function to find index of element x in the array if it is present.
    int closer(int arr[],int n, int x)
    {
        //Your code here
       int low = 0,high=n-1;
       while(low<=high)
       {
           int mid = low+(high-low)/2;
           if(arr[mid] == x)
           {
               return mid;
           }
           else if(arr[mid+1] == x)
           {
               return mid+1;
           }
           else if(arr[mid-1] == x)
           {
               return mid-1;
           }
           else if(arr[mid] > x)
           {
               high= mid - 2;
           }
           else
           {
              low = mid + 2;
           }
       }
       return -1;
    }
};