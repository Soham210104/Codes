stack<int> _push(int arr[],int n)
{
   // your code here
    stack<int> s;
    s.push(arr[0]);
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=s.top())
        {
            s.push(arr[i]);
            min = arr[i];
        }
        else
        {
            s.push(min);
        }
    }
    
    
    return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        int res = s.top();
        s.pop();
        cout<<res<<" ";
    }
    
}