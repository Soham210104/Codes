class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    void solve(Node* root,int idx,unordered_set<Node*> &result,vector<Node*> &temp,int k)
    {
        if(!root) return;
        
        temp.push_back(root);
        
        if(!root->left && !root->right) //means if it leaf node
        {
            if(idx-k>=0)
            {
                result.insert(temp[idx-k]);
            }
        }
        
        solve(root->left,idx+1,result,temp,k);
        solve(root->right,idx+1,result,temp,k);
        temp.pop_back();
    }
    
    int printKDistantfromLeaf(Node* root, int k)
    {
    	//Add your code here. 
    	vector<Node*> temp;
    	unordered_set<Node*> result;
    	solve(root,0,result,temp,k);
    	
    	
    	return result.size();
    }
};