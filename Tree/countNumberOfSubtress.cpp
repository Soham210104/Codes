int solve(Node* root,int& X,int &count){
    int sum=0,lsum=0,rsum=0;
    
    if(root->left){
        lsum=solve(root->left,X,count);
    }
    if(root->right){
        rsum=solve(root->right,X,count);
    }
    
    sum = lsum+rsum+root->data;
    if(sum==X){
        count++;
    }
    
    return sum;
}



int countSubtreesWithSumX(Node* root, int X){
	// Code here
	int count = 0;
	solve(root,X,count);
	return count;
}