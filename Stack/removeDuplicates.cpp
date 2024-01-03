class Solution
{
    public:
    stack<char> s;
    bool exist = false;
    
    void isExist(char &top,char &x)
    {
        if(top == x)
        {
            exist = true;
        }
        else
        {
            exist = false;
        }
    }
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string x)
    {
        bool start = true;
        string resultString;
        // Your code here
        for(char t:x)
        {
            if(start)
            {
                s.push(t);
                start = false;
            }
            else
            {
              isExist(s.top(),t);
                    {
                        if(!exist)
                        {
                            s.push(t);
                        }
                    }
            }
        }
        while (!s.empty()) 
        {
            resultString += s.top();
            s.pop();
        }
        
        std::reverse(resultString.begin(), resultString.end());
        return resultString;
    }
};