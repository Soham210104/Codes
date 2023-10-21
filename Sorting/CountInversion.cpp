// Given an array of integers. Find the Inversion Count in the array. 

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted.
//  If the array is already sorted then the inversion count is 0.
// If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int merge(long long int arr[],long long int l,long long int m,long long int r)
    {
        long long int n1 = m-l+1,n2=r-m;
        long long int left[n1],right[n2];
        for(long long int i=0;i<n1;i++)
        {
            left[i] = arr[l+i];
        }
        for(long long int i=0;i<n2;i++)
        {
            right[i] = arr[m+1+i];
        }
        long long int res=0,i=0,j=0,k=l;
        while(i<n1&&j<n2)
        {
            if(left[i]<=right[j])
            {
                arr[k] = left[i];
                i++,k++;
            }
            else
            {
                arr[k] = right[j];
                res = res+(n1-i);
                j++,k++;
            }
        }
        while(i<n1)
        {
            arr[k] = left[i];
            i++,k++;
        }
        while(j<n2)
        {
            arr[k] = right[j];
            j++,k++;
        }
        return res;
    }
    long long int mergeSort(long long int arr[],long long l,long long r)
    {
        long long int res = 0;
        if(l<r)
        {
            long long int m=l+(r-l)/2;
            res += mergeSort(arr,l,m);
            res += mergeSort(arr,m+1,r);
            res += merge(arr,l,m,r);
        }
        return res;
    }
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        long long int l = 0,r=n-1;
        long long int ans = mergeSort(arr,l,r);
        
        return ans;
    }

};