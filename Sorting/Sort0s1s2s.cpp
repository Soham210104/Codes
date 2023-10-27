class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
       int l = 0,r=n-1,i=0;
       while(i<=r)
        {
            if(arr[i] == 0)
            {
                swap(arr[i],arr[l]);
                l++,i++;
            }
            else if(arr[i] == 2)
            {
                swap(arr[i],arr[r]);
                r--;
            }
            else
            {
                i++;
            }
        }
    }
    
};
