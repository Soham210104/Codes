class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    
	    
	    //s1+s2 > s2+s1 return true means while sorting if s1+s2 > s2+s1 then keep s1 before s2 else s2 before s1.
	    auto cmp = [](string &s1,string &s2){
	      if(s1+s2 > s2+s1){
	          return true;
	      } 
	      return false;
	    };
	    
	    sort(arr.begin(),arr.end(),cmp);
	    
	    string result = "";
	    
	    
	    for(string &s : arr){
	        result += s;
	    }
	    
	    return result;
	}
};