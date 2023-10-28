

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
    //code
        sort(a.begin(),a.end());
        long long i = 0,j=m-1,res=INT_MAX,diff=0;
        while(j<n)
        {
            diff = a[j]-a[i];
            res = min(diff,res);
            i++,j++;
        }
        return res;
    }   
};