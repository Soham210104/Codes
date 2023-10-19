// Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space.
//  Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long a[], long long b[], int m, int n) 
        { 
            // code here
            int left = m-1;
            int right = 0;
            while(left>=0 && right<n)
            {
                if(a[left]>b[right])
                {
                    swap(a[left],b[right]);
                    left--,right++;
                }
                else
                {
                    break;
                }
                
            }
            sort(a,a+m);
            sort(b,b+n);
        }
};