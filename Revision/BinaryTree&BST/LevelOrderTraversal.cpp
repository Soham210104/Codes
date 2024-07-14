class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      
      if(root == NULL){
          return {0};
      }
      vector<int> v;
      queue<Node*> q;
      q.push(root);
      v.push_back(root->data);
      
      while(!q.empty()){
          
          for(int i=0;i<q.size();i++){
              Node* node = q.front();
              q.pop();
              if(node->left != NULL){
                  q.push(node->left);
                  v.push_back(node->left->data);
              }
              if(node->right != NULL){
                  q.push(node->right);
                  v.push_back(node->right->data);
              }
          }
      }
      
      return v;
    }
};