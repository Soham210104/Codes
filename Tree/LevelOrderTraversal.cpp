class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      if(node == NULL) return {};
      vector<int> v;
      
      queue<Node*> q;
      
      q.push(node);
      
      while(!q.empty())
      {
            int count = q.size();
            for(int i=0;i<count;i++)
            {
                Node* curr = q.front();
                q.pop();
                
                v.push_back(curr->data);
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
      
      return v;
    }
};