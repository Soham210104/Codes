class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        long long int sumA = 0,sumB = 0,res = 0;
        
        for(int i=0;i<n;i++){
            sumA += a[i];
            sumB += b[i];
        }
        if(sumA < sumB)
        {
            sort(a,a+n);
            sort(b,b+n,greater<int>());
            
            for(int i=0;i<n;i++)
            {
                res += a[i] * b[i];
            }
            
            return res;
        }
        else
        {
            sort(b,b+n);
            sort(a,a+n,greater<int>());
            
            for(int i=0;i<n;i++)
            {
                res += a[i] * b[i];
            }
            
            return res;
        }
    }
};