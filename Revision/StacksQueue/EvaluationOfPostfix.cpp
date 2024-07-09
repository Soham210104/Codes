{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            
            if((c >= '0' && c<= '9')){
                st.push(c-'0');
            }
            else{
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                if(c =='+'){
                    int res = op1+op2;
                    st.push(res);
                }
                else if(c =='-'){
                    int res = op1-op2;
                    st.push(res);
                }
                else if(c =='*'){
                    int res = op1*op2;
                    st.push(res);
                }
                else if(c =='/'){
                    int res = op1/op2;
                    st.push(res);
                }
            }
        }
        return st.top();
    }
};