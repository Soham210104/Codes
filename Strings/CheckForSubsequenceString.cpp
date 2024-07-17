class Solution
{
public:
    // Function to check if a string is subsequence of other string.
    bool solve(string A,string B,int n,int m,int i,int j){
        if(i == n){
            return true;
        }
        
        if(A[i] == B[j]){
            solve(A,B,n,m,i+1,j+1);
        }
        
        return solve(A,B,n,m,i,j+1);
    }
    
    
    
    
    bool isSubSequence(string A, string B)
    {
        bool ans = false;
        int n = A.size();
        int m = B.size();
        int i=0,j=0;
        ans = solve(A,B,n,m,i,j);
        
        return ans;
    }
};