class Solution{
  public:
    //Function to construct binary tree from parent array.
    Node *createTree(int parent[], int N)
    {
        // Your code here
        unordered_map<int,Node*> mpp;
        Node* root = NULL;
        for(int i=0;i<N;i++)
        {
            mpp[i] = new Node(i);
        }
        
        for(int i=0;i<N;i++)
        {
            if(parent[i]==-1)
            {
                root=mpp[i];
            }
            else
            {
                if(mpp[parent[i]]->left==NULL)
                {
                    mpp[parent[i]]->left = mpp[i];
                }
                else
                {
                    mpp[parent[i]]->right = mpp[i];
                }
            }
        }
        
        return root;
    }
};