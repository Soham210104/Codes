class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
   
    int solve(Node* root)
    {
        if(root==NULL) return 0;
        int lh = solve(root->left);
        if(lh==-1) return -1;
        int rh = solve(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        else return max(lh,rh)+1;
        
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int res = solve(root);
        
        if(res>0)
        {
            return true;
        }
        if(res<0)
        {
            return false;
        }
        
        
    }
};