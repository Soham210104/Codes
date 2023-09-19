// Print a sequence of numbers starting with N where A[0] = N, without using loop, in which  A[i+1] = A[i] - 5,
//   until A[i] > 0. After that A[i+1] = A[i] + 5  repeat it until A[i] = N.



class Solution{
public:
    vector<int> pattern(int N)
    {
        // code here
        vector<int> v;
        v.push_back(N);
        int i=0;
        while(N>0)
        {
            v.push_back(N-5);
            N = N-5;
        }
        int n = v.size() - 1;
        while(n>0)
        {
            v.push_back(N+5);
            N = N+5;
            n--;
        } 
        
        return v;
    }
};
/*
Without using loop
// User function Template for C++

class Solution{
public:
    vector<int> ans;
    vector<int> pattern(int N){
        ans.push_back(N);
        if(N<=0){
            return ans;
        }
        pattern(N-5);
        ans.push_back(N);
        return ans;
        
    }
};


*/