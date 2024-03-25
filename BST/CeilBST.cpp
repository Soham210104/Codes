void solve(Node* root, int X, int &res) {
    if (root == NULL) {
        return;
    }
    if (root->data == X) {
        res = root->data;
        return; // No need to traverse further
    }
    if (root->data < X) {
        solve(root->right, X, res);
    }
    else {
        res = root->data; 
        solve(root->left, X, res);
    }
}

int findCeil(Node* root, int X) {
    if (root == NULL) return -1;
    int res = INT_MAX;
    solve(root, X, res);
    return (res == INT_MAX) ? -1 : res;
}