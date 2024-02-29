class Solution {
  public:
    int res = 0; 

    int diameter(Node* root) {
        calculateHeight(root); 
        return res;
    }

    int calculateHeight(Node* node) {
        if (node == NULL) return 0; // Base case

        int lh = calculateHeight(node->left);
        int rh = calculateHeight(node->right);
        
        res = max(res, lh + rh + 1); 

        return 1 + max(lh, rh);
    }
};