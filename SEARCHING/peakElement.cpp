// An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
// Given an array arr[] of size N, Return the index of any one of its peak elements.
// Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. 

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int low = 0,high = n-1;
       while(low<=high)
       {
           int mid = (low+high)/2;
           if(arr[mid] > arr[mid-1] && arr[mid] >= arr[mid+1])
           {
               //cout<<"First"<<endl;
               return mid;
           }
           else if(mid==0 && arr[mid+1] <= arr[mid])
           {
               //cout<<"second"<<endl;
               return mid;
           }
           else if(mid == n-1 && arr[mid-1] <= arr[mid])
           {
               //cout<<"third"<<endl;
               return mid;
           }
           else if(arr[mid] <= arr[mid-1])
           {
               //cout<<"fourth"<<endl;
               high=mid-1;
           }
           else
           {
               //cout<<"fifth"<<endl;
               low = mid+1;
           }
       }
    }
};