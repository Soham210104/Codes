

class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx)
    {
        // Your code here
           int arr[1000000];
           for(int i=0;i<1000000;i++)
           {
               arr[i] = 0;
           }
           
           
           for(int i=0;i<n;i++)
           {
               arr[L[i]]++;
               arr[R[i]+1]--;
           }
           
           //Doing the prefix sum to check how frquent times the number occured in the range.
           for(int i=1;i<1000000;i++)
           {
               arr[i] = arr[i]+arr[i-1];
           }
           
           int res = 0;
           for(int i=0;i<1000000;i++)
           {
               if(arr[i] > arr[res])
               {
                   res = i;
               }
           }
           
           return res;
    }
};