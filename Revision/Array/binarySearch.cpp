class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int l = 0;
        int r = arr.size() - 1;
        
        
        while(l<=r){
            int mid = (l + r)/2;
           
            if(arr[mid] == k) return mid;
            else if(arr[mid] > k) r = mid - 1;
            else l = mid + 1;
        }
        
        return -1;
    }
};