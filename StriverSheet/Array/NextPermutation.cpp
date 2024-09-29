class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        //First find out the longest prefix match or the breakpoint
        int idx = -1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i] < arr[i+1]){
                idx = i;
                break;
            }
        }

        if(idx == -1){
            reverse(arr.begin(),arr.end());
        }
        else{
            for(int i=arr.size()-1;i>=0;i--){
                if(arr[i] > arr[idx]){
                    swap(arr[i],arr[idx]);
                    break;
                }
            }
            reverse(arr.begin()+idx+1,arr.end());
        }

    }
};