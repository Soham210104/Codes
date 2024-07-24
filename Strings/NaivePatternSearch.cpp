class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	
    	// Your code here
    	int n = txt.length();
    	int m = pat.length();
    	
    	for(int i=0;i<=n-m;i++){
    	    int j;
    	    for(j=0;j<m;j++){
    	        if(pat[j] != txt[i+j]) break;
    	        if(j==m-1) return true;
    	    }
    	}
    	
    	return false;
    	
    }
};