class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) 
    {
        // Your code goes here
        int minimum = min(n,m);
        if(minimum == m)
        {
            unordered_set<int> s(b,b+m);
            int count = 0;
            for(int i=0;i<n;i++)
            {
                if(s.find(a[i]) != s.end())
                {
                    count++;
                    s.erase(a[i]);
                }
            }
            return count;
        }
        else if(minimum == n)
        {
            unordered_set<int> s(a,a+n);
            int count = 0;
            for(int i=0;i<m;i++)
            {
                if(s.find(b[i]) != s.end())
                {
                    count++;
                    s.erase(b[i]); //so if b cotains duplicate elements
                }
            }
            return count;
        }
        else
        {
            return 0;
        }
    }
};