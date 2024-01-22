class Solution {
public:
    long long power(int N, int R) 
    {
        long long m = 1e9+7;
        if(N==0) return 0;
        if(R==0) return 1;
        
  
        if(R%2 == 0)
        {
            long long ans = power(N,R/2);
            return (ans%m * ans%m) % m;
        }
        else if(R%2 !=0)
        {
           
            long long ans = power(N,(R-1)/2);
            return (ans%m * ans%m * N%m) % m;
        }
    }
};