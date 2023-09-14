// Given an array Arr of n integers arranged in a circular fashion.
//  Your task is to find the minimum absolute difference between adjacent elements.

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n)
    {    
        //This cant be solved without using tmep array,just update the min
        //each time when we calculate the difference in a loop which runs till n-1
        //then calculate seperate for last and first element and check if its minimum or not.
        int temp[n];
        // Your code here
        for(int i=0;i<n;i++)
        {
             int diff = 0;
             diff = arr[(i+1)%n] - arr[i%n];
            if(diff<0)
            {
                diff = diff*-1;
            }
            temp[i] = diff;
        }
        
        int min = 99999999999999999;
        for(int i=0;i<n;i++)
        {
           if(temp[i]<min)
           {
               min = temp[i];
           }
           
        }
        
        return min;
        
    }
};