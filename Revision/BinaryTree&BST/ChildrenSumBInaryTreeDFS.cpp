class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    
    bool solve(Node* root){
        if (!root) {
            return true;
        }
        
        if(!root->left && !root->right){
            return true;
        }
        int l=0,r=0;
        if(root->left){
            l = root->left->data;
        }
        if(root->right){
            r = root->right->data;
        }
        
        int sum = l + r;
        if(root->data != sum){
            return false;
        }
        
        return solve(root->left) && solve(root->right);
    }
    
    
    int isSumProperty(Node *root)
    {
     // Add your code here
        
        if(solve(root)){
            return 1;
        }
        else{
            return 0;
        }
    }
};