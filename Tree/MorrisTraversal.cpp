class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int> v;
        Node* curr = root;
        
        while(curr!=NULL)
        {
            if(curr->left == NULL)
            {
                v.push_back(curr->data);
                curr=curr->right;
            }
            else
            {
                Node* prev = curr->left;
                while(prev->right!=NULL && prev->right!=curr)
                {
                    prev =  prev->right;
                }
                if(prev->right == NULL)
                {
                    prev->right = curr;
                    curr=curr->left;
                }
                else
                {
                    prev->right == NULL;
                    v.push_back(curr->data);
                    curr=curr->right;
                }
            }
            
        }
        return v;
    }
};