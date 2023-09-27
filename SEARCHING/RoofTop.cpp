
class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int a[], int n)
    {
       //Your code here
       int count = 0,res=0;
       if(n==1)
       {
           return count;
       }
       else
       {
       for(int i =0;i<n-1;i++)
       {
           if(a[i]<a[i+1])
           {
               //cout<<"first called"<<endl;
               count++;
           }
           else
           {
               //cout<<"second called"<<endl;
               count=0;
           }
            res = max(res,count);
       }
       }
       return res;
    }
};