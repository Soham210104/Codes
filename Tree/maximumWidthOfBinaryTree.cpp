class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) 
    {
      int res = INT_MIN;
      if(root == NULL) return 0;
      queue<Node*> q;
      
      q.push(root);
      
      while(!q.empty())
      {
            int count = q.size();
            res = max(count,res);
            
            for(int i=0;i<count;i++)
            {
                Node* curr = q.front();
                q.pop();
                
                if(curr->left!=NULL)
                {
                    q.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    q.push(curr->right);
                }
            }
      }
      return res;
      
     
    }
    
};