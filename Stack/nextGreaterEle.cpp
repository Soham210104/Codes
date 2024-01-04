class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        // Your code here
        vector<long long> v;
        stack<long long>s;
        
        s.push(arr[n-1]);
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty()&&s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.empty() == true)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            s.push(arr[i]);
        }
        
        reverse(v.begin(),v.end());
        
        return v;
    }
};