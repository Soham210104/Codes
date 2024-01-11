class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {   stack<int> st;
        for(int i=0;i<S.length();i++)
        {   if(int(S[i]) >= int('0') && int(S[i]) <= int('9'))
            {   st.push(S[i] -'0');    }
            else{
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                if(S[i] == '+')
                {   st.push(x+y);   }
                if(S[i] == '-')
                {   st.push(x-y);   }
                if(S[i] == '*')
                {   st.push(x*y);   }
                if(S[i] == '/')
                {   st.push(x/y);   }
                    
            }
        }
        return st.top();
        // Your code here
    }
};