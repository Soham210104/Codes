{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char &a, char &b)
    {
        return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
    }

    bool ispar(string x)
    {
        stack<char> s;
        // Your code here
        for(char t:x)
        {
            if (t == '(' || t == '{' || t == '[')
            {
                s.push(t);
            }
            else
            {
                if(s.empty() == true)
                {
                    return false;
                }
                else if(matching(s.top(),t) == false)
                {
                    return false;
                }
                else
                {
                    s.pop();
                }

            }
        }
        if(s.empty() == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
};
