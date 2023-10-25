// Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
// 1) All elements smaller than a come first.
// 2) All elements in range a to b come next.
// 3) All elements greater than b appear in the end.
// The individual elements of three sets can appear in any order. You are required to return the modified array.

// Note: The generated output is 1 if you modify the given array successfully.

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void swap(vector<int>& array,int l,int r)
    {
        int temp = array[l];
        array[l] = array[r];
        array[r] = temp;
    }
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here
        int l = 0;
        int r = array.size() - 1;
        int i=0;
        for(i=0;i<=r;i++)
        {
            if(array[i]<a)
            {
                swap(array,l,i);
                l++;
            }
            else if(array[i]>b)
            {
                swap(array,r,i);
                r--,i--;
            }
        }
    }
};