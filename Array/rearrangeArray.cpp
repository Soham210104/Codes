class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long  arr[], int n) 
    {
        // Your code here
        for(int i = 0;i<n;i++)
        {
            /*int x = arr[i];
            int y = arr[x];
            arr[i] = x+(y%n)*n;
            
            
            Now arr = 4 0 2 1 3
            
            Dry run:
            x = arr[0] = 4
            y = arr[4] = 3
            
            now arr[0] = 4+(3%5)*5 = 19
            
            x = arr[1] = 0
            y = arr[0] = 19 which we had changed previously
            
            arr[1] = 0+(19%5)*5 = 0+4*5 = 20
            
           By this trick we will get
           
           modified = 19 20 12 1 8
           
           to get the output we divide each element of arr by 5 means arr[i] /= n
            output  = 3 4 2 0 1
            
            */
            
            arr[i]+=n*(arr[arr[i]]%n);
        }
        for(int i=0;i<n;i++)
        {
            arr[i] = arr[i]/n;
        }
    }
};