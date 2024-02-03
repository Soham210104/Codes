class Solution {
public:
    // Complete this function
    int digitalRoot(int n) {
        // Your code here
        if (n < 10) {
            return n;  // Return the single-digit number itself
        }
        return digitalRoot(digitSum(n));
    }

    int digitSum(int n) {
        if (n == 0) {
            return 0;
        }
        return n % 10 + digitSum(n / 10);
    }
};
