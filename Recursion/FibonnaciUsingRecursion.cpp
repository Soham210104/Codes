class Solution{
    public:
    //Complete this function
    int fibonacci(int n)
    {
        //Your code here
        if(n<=1) return n;
        return fibonacci(n-1)+fibonacci(n-2);
    }
};
