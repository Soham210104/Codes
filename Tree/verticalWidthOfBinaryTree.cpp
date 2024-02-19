unordered_set<int> st;
void solve(Node* root,int hd)
{
    if(root!=NULL)
    {
        solve(root->left,hd-1);
        st.insert(hd);
        solve(root->right,hd+1);
    }
}

int verticalWidth(Node* root)
{
    // Code here
    st.clear();
    solve(root,0);
    return st.size();
}