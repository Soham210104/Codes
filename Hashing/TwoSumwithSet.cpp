int sumExists(int arr[], int N, int sum) 
{
    // Your code here
    unordered_set<int> s;
    for (int i = 0; i < N; i++) {
        int temp = sum - arr[i];
 
        if (s.find(temp) != s.end()) {
            return 1;
        }
        s.insert(arr[i]);
    }
   return 0;
}