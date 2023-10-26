class Solution {
public:
    void binSort(int arr[], int N) {
        int left = 0, right = N - 1;

        while (left <= right) {
            if (arr[left] == 0) {
                left++;
            } else if (arr[right] == 1) {
                right--;
            } else {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};
