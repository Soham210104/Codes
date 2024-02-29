vector<int> findSpiral(Node *root)
{
    //Your code here
    stack<Node*> s1;
    stack<Node*> s2;
    vector<int> result;
    s1.push(root);
    if(root == NULL)
    {
        return {};
    }
    
    while(s1.empty()==false||s2.empty()==false)
    {
        while(!s1.empty())
        {
            Node* curr = s1.top();
            s1.pop();
            result.push_back(curr->data);
            if(curr->right!=NULL)
            {
                s2.push(curr->right);
            }
            if(curr->left!=NULL)
            {
                s2.push(curr->left);
            }
        }   
        while(!s2.empty())
        {
            Node* curr = s2.top();
            s2.pop();
            result.push_back(curr->data);
            if(curr->left!=NULL)
            {
                s1.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                s1.push(curr->right);
            }
        }
    }
    
    return result;
    
}