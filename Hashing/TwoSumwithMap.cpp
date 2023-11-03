int sumExists(int arr[], int N, int sum) 
{
    map<int, int> mpp;
    for(int i = 0; i < N; i++)
    {
        int temp = sum - arr[i];
        if(mpp.find(temp) != mpp.end())
        {
            return 1;
        }
        mpp.insert({arr[i], i});
    }
    return 0;
}