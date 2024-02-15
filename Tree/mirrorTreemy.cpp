class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) 
    {
        // code here
           if(node == NULL)
           {
               return;
           }
           Node* temp1 = NULL;
           Node* temp2 = NULL;
           temp1 = node->left;
           temp2 = node->right;
           node->left = temp2;
           node->right = temp1;
           //delete temp1;
           //delete temp2;
           mirror(node->left);
           mirror(node->right);
        
        
    }
};