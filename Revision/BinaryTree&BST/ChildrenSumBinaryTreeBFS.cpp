class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
        int ans = 1;
        queue<Node*> q;
        q.push(root);
        if(root == NULL) return 0;
        
        while(!q.empty()){
            int size = q.size();
            
            for(int i=0;i<size;i++){
                Node* node = q.front();
                q.pop();
                int l=0,r=0;
                if(node->left){
                    l = node->left->data;
                    q.push(node->left);
                }
                if(node->right){
                    r = node->right->data;
                    q.push(node->right);
                }
                int sum = l + r;
                if(sum == 0){
                    sum = node->data;
                }
                if((node->data) != sum){
                    ans = 0;
                }
            }
        }
        
        return ans;
    }
};