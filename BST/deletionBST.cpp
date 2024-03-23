int minValue(Node* root){
    int minV = root->data;
    while(root->left!=NULL){
        minV = root->left->data;
        root = root->left;
    }
    return minV;
}

Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(root == NULL){
        return root;
    }
    
    if(X>root->data){
        root->right = deleteNode(root->right,X);
    }
    else if(X<root->data){
        root->left = deleteNode(root->left,X);
    }
    else{
        if(root->left==NULL){
            return root->right;
        }
        else if(root->right==NULL){
            return root->left;
        }
        else{
            root->data = minValue(root->right);
            
            root->right = deleteNode(root->right,root->data);
        }
    }
    
    return root;
}