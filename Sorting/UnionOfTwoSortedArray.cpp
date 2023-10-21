// Union of two arrays can be defined as the common and distinct elements in the two arrays.
// Given two sorted arrays of size n and m respectively, find their union.

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int a[], int b[], int n, int m)
    {
       vector<int>ans;
       
       int i=0,j=0;
       
       while(i<n && j<m)
       {
           if(a[i]<=b[j])
           {
               if(ans.empty() || ans.back()!=a[i])
               ans.push_back(a[i]);
               
               i++;
           }
           else
           {
               if(ans.empty() || ans.back()!=b[j])
               ans.push_back(b[j]);
               
               j++;
           }
       }
       
     while(i<n)
     {
           if(ans.empty() || ans.back()!=a[i])
               ans.push_back(a[i]);
               
               i++;
     }
     while(j<m)
     {
          if(ans.empty() || ans.back()!=b[j])
               ans.push_back(b[j]);
               
               j++;
     }
     
     return ans;  
    }
};