class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        
        int max1 = -1;
        
        for(int i=0;i<arr.size();i++){
            max1 = max(max1,arr[i]);
        }
        
        int max2 = -1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] == max1) continue;
            
            max2 = max(max2,arr[i]);
        }
        
        
        return max2;
        
    }
};