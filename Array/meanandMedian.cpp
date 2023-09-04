/*
Find the mean and median of an array.
*/

class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        int count = 0;
        for(int i=0;i<N;i++)
        {
            count++;
        }
        int mid = count/2;
        int mid1 = (count/2) - 1;
        int res = (mid+mid1)/2;
        if(N%2!=0)
        {
            return A[mid];
        }
        else
        {
        return A[res];
        }
        //your code here
        //If median is in fraction then convert it to integer and return
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int sum = 0;
        for(int i = 0;i<N;i++)
        {
            sum += A[i];
        }
        
        return (int)sum/(int)N;
    }
};