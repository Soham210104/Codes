// Given an array arr[] of n positive integers. The task is to find the maximum for every adjacent pairs in the array.

void maximumAdjacent(int n, int arr[])
{
    
    int res=0;
    for(int i=1;i<n;i++)
    {
        res = max(arr[i],arr[i-1]);
        cout<<res<<" ";
    }
     
}