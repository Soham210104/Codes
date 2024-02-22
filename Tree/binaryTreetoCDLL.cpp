class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    Node* prev = NULL;
    Node* head = NULL;
    Node *bTreeToCList(Node *root)
    {
        if(root == NULL) return NULL;
        
        bTreeToCList(root->left);
        if(head == NULL)
        {
            head = root;
        }
        
        root->left = prev;
        if(prev!=NULL)
        {
            prev->right = root;
        }
        
        prev = root;    
        bTreeToCList(root->right);
        if(root->right==NULL)
        {
            root->right = head;
            head->left = root;
        }
        return head;
        
        
    }
};