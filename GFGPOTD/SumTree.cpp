class Solution {
  public:
    bool ans = true;
    int solve(Node *node){
        if(!node->left && !node->right) return node->data;
        
        int l = 0, r = 0;
        if(node->left) l = solve(node->left);
        if(node->right) r = solve(node->right);
        
        if(l + r  != node->data) ans = false;
        
        return node->data + l + r;
    }
    bool isSumTree(Node* root) {
        // Your code here
        solve(root);
        return ans;
    }
};