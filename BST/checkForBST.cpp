class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        long minVal = LONG_MIN;
        long maxVal = LONG_MAX;
        
        return (solve(root,minVal,maxVal));
    }
    
    bool solve(Node* root,long minVal,long maxVal){
        
        if(root==NULL){
            return true;
        }
        if(root->data >= maxVal || root->data <= minVal){
            return false;
        }
        
        return solve(root->left,minVal,root->data) && solve(root->right,root->data,maxVal);
    }
};