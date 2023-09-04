/*Given an array arr[] of size N of positive integers which may have duplicates. 
The task is to find the maximum and second maximum from the array, and both of them should be different from each other, 
so If no second max exists, then the second max will be -1.*/

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        long  max1 = -1, max2=-1;
        vector<int> v(2);
        for(int i=0;i<sizeOfArray;i++)
        {
             if(arr[i]>max1)
             {
                 max2=max1;
                 max1=arr[i];
             }
             else if(arr[i]>max2 && arr[i]!=max1)
             {
                 max2=arr[i];
             }
        }
        v[0]=max1;
       
         v[1]=max2;
        
      return v;   
    }
};