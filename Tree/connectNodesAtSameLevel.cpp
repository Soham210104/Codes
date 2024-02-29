class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
    if(root == NULL) // Base case
        {
            return;
        }

        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int count = q.size();
            Node* prev = NULL;
            for(int i = 0; i < count; i++)
            {
                Node* curr = q.front();
                q.pop();
                
                if(prev != NULL)
                {
                    prev->nextRight = curr;
                }
                prev = curr;
                
                
                if(curr->left != NULL)
                {
                    q.push(curr->left);
                }
                if(curr->right != NULL)
                {
                    q.push(curr->right);
                }
            }
            
        }
    }    
};