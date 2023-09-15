// Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array. 
// If both elements have the same frequency, then return the smaller element.
// Note:  We need to return the element, not its count.

class Solution
{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    

    int majorityWins(int a[], int n, int x, int y) 
    {
        // code here
        int count1 = 0;
        int count2 = 0;
        int temp1=0,temp2=0;
        for(int i=0;i<n;i++)
        {
            if(x == a[i])
            {
                count1++;
                temp1 = i;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(y == a[j])
            {
                count2++;
                temp2 = j;
            }
        }
       if(count1 == count2)
       {
           if(count1==0 || count2==0)
           {
               return min(x,y);
           }
           return min(a[temp1],a[temp2]);
       }
       else if(count1 < count2)
       {
           return a[temp2];
       }
       else if(count1 > count2)
       {
           return a[temp1];
       }
      
    } 
};