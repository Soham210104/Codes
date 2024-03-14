class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    int maximumPath(Node* root,int &maxi){
        if(root == NULL)
        {
            return 0;
        }
        
        int leftSum = max(0,maximumPath(root->left,maxi));
        int rightSum = max(0,maximumPath(root->right,maxi));
        maxi = max(maxi,leftSum+rightSum+root->data);
        
        return (root->data)+max(leftSum,rightSum);
    }
    
    
    int findMaxSum(Node* root)
    {
        // Your code goes here
        int maxi = INT_MIN;
        maximumPath(root,maxi);
        return maxi;
    }
};