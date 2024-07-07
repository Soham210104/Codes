class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.
        stack<int> temp;
        for(int i=0;i<(sizeOfStack/2);i++){
            int val = s.top();
            s.pop();
            temp.push(val);
        }
        
        s.pop();
        
        while(!temp.empty()){
            int val = temp.top();
            temp.pop();
            s.push(val);
        }
    }
};