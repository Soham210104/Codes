class Solution 
{
    private:
    bool knows(vector<vector<int> >& M,int a,int b){
        if(M[a][b]){
            return true;
        }
        return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        while(st.size() != 1){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            
            if(knows(M,a,b)){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        
        int ans = st.top();
        int rCount = 0;
        for(int i=0;i<n;i++){
            if(M[ans][i] == 0){
                rCount++;
            }
        }
        
        if(rCount != n){
            return -1;
        }
        
        int cCount = 0;
        for(int i=0;i<n;i++){
            if(M[i][ans] == 1){
                cCount++;
            }
        }
        
        if(cCount != n-1){
            return -1;
        }
        
        return ans;
    }
};