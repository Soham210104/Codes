class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int count = 0;
        for(int c = n-1;c>=2;c--)
        {
            int a=0;
            int b = c-1;
            while(a<b)
            {
                if(arr[a]+arr[b]>arr[c])
                {
                    count += b-a;
                    b--;
                }
                else
                {
                    a++;
                }
            }
        }
        return count;
    }
};