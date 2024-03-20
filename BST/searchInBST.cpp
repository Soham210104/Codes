bool search(Node* root, int X) {
    // Your code here
    if(root==NULL){
        return false;
    }
    
    if(root->data==X){
        return true;
    }
    else if(X < root->data){
        search(root->left,X);
    }
    else
    {
        search(root->right,X);
    }
    //return false;
}