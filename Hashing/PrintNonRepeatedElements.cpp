class Solution {
public:
    vector<int> printNonRepeated(int nums[], int n) {
        unordered_map<int, int> frequency;
        vector<int> result;
        
        for(int i = 0; i < n; i++) {
            frequency[nums[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            if(frequency[nums[i]] == 1) {
                result.push_back(nums[i]);
            }
        }
        
        return result;
    }
};
