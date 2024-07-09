class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char &a,char &b){
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    
    
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        
        for(char t:x){
            if(t =='[' || t == '(' || t == '{'){
                st.push(t);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(!matching(st.top(),t)){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        
        if(st.empty()) return true;
        else return false;
    }

};