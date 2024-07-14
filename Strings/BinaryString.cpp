class Solution {
public:
    // Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string S) {
        long countOnes = 0;
        
        for(int i = 0; i < n; i++) {
            if(S[i] == '1') {
                countOnes++;
            }
        }
        
        return countOnes * (countOnes - 1) / 2;
    }
};
