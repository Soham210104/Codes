class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       stack<int> s;
       vector<int> v;
       s.push(0);
       //v.push_back(1);
       
       for(int i=0;i<n;i++)
       {
           int span = 1;
           while(s.empty() == false && arr[s.top()] <= arr[i])
           {
               s.pop();
           }
           
           if(s.empty() == true)
           {
               span = i+1;
           }
           else
           {
                span = i-s.top();
           }
           s.push(i);
           v.push_back(span);
       }
       return v;
    }
};