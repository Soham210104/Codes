Node* merge(Node* l1,Node* l2){
    Node* dummyNode = new Node(-1);
    Node* res = dummyNode;
    
    while(l1 != NULL && l2 != NULL){
        if(l1->data < l2->data){
            res->bottom = l1;
            res = l1;
            l1 = l1->bottom;
        }
        else{
            res->bottom = l2;
            res = l2;
            l2 = l2->bottom;
        }
        res->next = NULL;
    }
    if(l1){
        res->bottom = l1;
    }
    else{
        res->bottom = l2;
    }
    
    if(dummyNode->bottom){
        dummyNode->bottom->next = NULL;
    }
    
    return dummyNode->bottom;
}    
    
    
Node *flatten(Node *root)
{
   // Your code here
   if(root == NULL || root->next == NULL) return root;
   
   Node* mergeHead = flatten(root->next);
   root = merge(root,mergeHead);
   
   return root;
}