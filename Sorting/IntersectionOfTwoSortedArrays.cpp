The intersection of two arrays contains the elements common to both the arrays.
The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        //Your code here
        vector<int> v;
        int i=0,j=0;
        while(i<N && j<M)
        {
            if(i>0 && arr1[i]==arr1[i-1])
            {
                i++;
                continue;
            }
            if(arr1[i]<arr2[j])
            {
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
                j++;
            }
            else
            {
                v.push_back(arr1[i]);
                i++,j++;
            }
        }
        return v;
    }
};