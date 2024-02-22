class Solution
{
public: 
    // Function to convert binary tree to doubly linked list and return it
    Node* prev = NULL;
    Node* head = NULL;  // Added head pointer
    
    Node* bToDLL(Node* root)
    {
        if (root == NULL)
            return NULL;

        
        bToDLL(root->left);
        
        
        if (head == NULL)
            head = root;
        
        
        root->left = prev;
        
        
        if (prev != NULL)
            prev->right = root;
        
        
        prev = root;
        
        
        bToDLL(root->right);

        return head;
    }
};