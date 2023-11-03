// Given three sorted arrays A, B and C of size N, M and P respectively. 
// The task is to merge them into a single array which must be sorted in increasing order.
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        vector<int> v;
        
        for(int i=0;i<A.size();i++)
        {
            v.push_back(A[i]);
        }
        for(int i=0;i<B.size();i++)
        {
            v.push_back(B[i]);
        }
        for(int i=0;i<C.size();i++)
        {
            v.push_back(C[i]);
        }
        
        sort(v.begin(),v.end());
        return v;
    } 

};
