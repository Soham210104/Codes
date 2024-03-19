class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    const int EMPTY = -1;
    int index = 0;
    vector<int> v;
    vector<int> serialize(Node *root) 
    {
        //Your code here
        if(root == NULL)
        {
            v.push_back(EMPTY);
            return {};
        }
        v.push_back(root->data);
        serialize(root->left);
        serialize(root->right);
        
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if(index == A.size()){
           return NULL;
       }
       
       int val = A[index];
       index++;
       
       
       if(val == EMPTY){
           return NULL;
       }
       
       Node* root = new Node(val);
       root->left = deSerialize(A);
       root->right = deSerialize(A);
       
       return root;
       
    }
};