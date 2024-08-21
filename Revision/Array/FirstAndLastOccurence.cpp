class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        
        vector<int> ans;
        int idx = -1;
        for(int i=0;i<n;i++){
            if(arr[i] == x){
                idx = i;
                break;
            }
        }
        
        if(idx != -1)
        {
            ans.push_back(idx);
        }
        
        while(arr[idx] == x){
            ++idx;
        }
        
        if(idx != -1){
            ans.push_back(idx-1);
        }
        
        if(idx == -1){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            return ans;
        }
    }
};