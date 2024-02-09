vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>> v;
  queue<Node*> q;
  bool start = true;
  
  if(node == NULL) 
  {
    return {};
  }
  q.push(node);
  
  while(!q.empty())
  {
      int count = q.size();
      vector<int> currentLevel;
      for(int i=0;i<count;i++)
      {
          Node* curr = q.front();
          q.pop();
          
          currentLevel.push_back(curr->data);
          
          if(curr->left)
          {
              q.push(curr->left);
          }
          if(curr->right)
          {
              q.push(curr->right);
          }
      }
        v.push_back(currentLevel);
  }
  return v;
}