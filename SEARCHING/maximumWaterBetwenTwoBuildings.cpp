// Given an integer array representing the heights of N buildings, the task is to delete N-2 
//buildings such that the water that can be trapped between the remaining two building is maximum.
// Note: The total water trapped between two buildings is gap between them (number of buildings removed)
//multiplied by height of the smaller building.

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int arr[], int n) 
    { 
        //Your code here
        int low=0,high=n-1,area=0,ans=INT_MIN,diff=0;
        diff = n-2;
        while(low<high)
        {
            area = min(arr[low],arr[high])*diff;
            ans = max(area,ans);
            
            if(arr[low]<arr[high])
            {
                low++;
                diff--;
            }
            else
            {
                high--;
                diff--;
            }
        }
        return ans;
    } 
};