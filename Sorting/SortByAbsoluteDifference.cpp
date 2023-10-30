
class Solution {
public:
    
    void sortABS(int arr[], int n, int k) {
       
        stable_sort(arr, arr + n, [k](int a, int b) 
        {
            if (abs(k - a) >= abs(k - b)) {
                return false;
            }
            return true;
        }
        );
    }
};