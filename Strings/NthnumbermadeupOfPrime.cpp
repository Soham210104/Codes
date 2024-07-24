class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        vector<int> primes = {2,3,5,7};
        queue<int> q;
        q.push(0);
        int rank = 0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            
            for(auto it : primes){
                q.push(curr * 10 + it);
                rank++;
                if(rank == n) return curr*10 + it;
            }
            
        }
        
        return 0;
    }
};