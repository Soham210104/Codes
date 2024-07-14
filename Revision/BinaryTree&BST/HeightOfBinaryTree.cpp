class Solution{
    public:
    //Function to find the height of a binary tree.
    void solve(struct Node* root,int &height,queue<Node*> q){
        if(root == NULL) return;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            height++;
            
            for(int i=0;i<size;i++){
                Node* node = q.front();
                q.pop();
                
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
        }
        
    }
    
    
    
    int height(struct Node* node){
        // code here 
        int ans = 0;
        queue<Node*> q;
        solve(node,ans,q);
        
        return ans;
    }
};