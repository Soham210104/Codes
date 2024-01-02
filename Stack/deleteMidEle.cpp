class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int> t;
        int mid = floor((sizeOfStack)/2);
        //cout<<"Mid is"<<mid<<endl;
        int i=0;
        while(i != mid)
        {
            t.push(s.top());
            s.pop();
            ++i;
        }
        s.pop();
        while(!t.empty())
        {
            s.push(t.top());
            t.pop();
        }
        
    }
};
