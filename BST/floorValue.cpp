void solve(Node* root,int key,int &floorValue){
    // if(root == NULL){
    //     return 0;
    // }
    if(root == NULL){
        return;
    }
    if(root->data <= key && root->data >= floorValue){
        floorValue = root->data;
        solve(root->right,key,floorValue);
    }
    else if(root->data > key){
        solve(root->left,key,floorValue);
    }
}

int floor(Node* root, int key) {
    // Your code goes here
    int floorValue=-1;
    solve(root,key,floorValue);
    
    return floorValue;
}