class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    bool Csum(Node* root)
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->left==NULL && root->right == NULL)
        {
            return true;
        }
        int sum=0;
        if(root->left!=NULL)
        {
            sum += root->left->data;
        }
        if(root->right!=NULL)
        {
            sum += root->right->data;
        }
        
        return(root->data == sum && (Csum(root->left) && Csum(root->right)));
        
    }
    int isSumProperty(Node *root)
    {
     // Add your code here
    bool result = Csum(root);
        if (result) {
            return 1;
        } else {
            return 0;
        }
    }
};