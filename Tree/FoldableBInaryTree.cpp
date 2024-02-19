bool solve(Node* a,Node* b)
{
    if(a==NULL && b==NULL) return true;
    if(a==NULL || b==NULL) return false;
    
    return(solve(a->left,b->right) && solve(a->right,b->left));
}


bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==NULL)
    {
        return true;
    }
    solve(root->left,root->right);
}