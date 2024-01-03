class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        // Your code here
        stack<char> s;
        string res;
        for(char t:str)
        {
            s.push(t);
        }
        
        stack<char> temp;
        while(!s.empty())
        {
            if (!temp.empty() && !s.empty() && temp.top() == s.top())
            {
                temp.pop();
                s.pop();
                continue;
            }
            if(!s.empty())
            {
                temp.push(s.top());
                s.pop();
            }
            
        }
        
        while (!temp.empty()) 
        {
            res += temp.top();
            temp.pop();
        }
        
        return res;
    }
};
