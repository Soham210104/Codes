class Solution
{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        // code here
        unordered_set<int>s;
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(s.find(-arr[i]) != s.end())
            {
                if(arr[i]<0)
                {
                res.push_back(arr[i]);
                res.push_back(-arr[i]);
                }
                else
                {
                res.push_back(-arr[i]);
                res.push_back(arr[i]);
                }
            }
            else
            {
                  s.insert(arr[i]);
            }
        }
    return res;
    }
};