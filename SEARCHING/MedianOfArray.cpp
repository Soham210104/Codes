class Solution
    {
        public:
        //Function to find the median of the two arrays when they get merged.
        int findMedian(int arr[], int n, int brr[], int m)
        {
            // code here
            int begin1 = 0,end1 = n;
            while(begin1<=end1)
            {
                    long long int i1 = (begin1+end1)/2;
                    long long int i2 = (n+m+1)/2 - i1;
                    long long int min1 = (i1==n)?INT_MAX:arr[i1];
                    long long int max1 = (i1==0)?INT_MIN:arr[i1-1];
                    long long int min2 = (i2==m)?INT_MAX:brr[i2];
                    long long int max2 = (i2==0)?INT_MIN:brr[i2-1];
                    
                    if(max1<=min2 && max2<=min1)
                    {
                        if(((n+m)%2) == 0)
                        {
                            return (int)(max(max1,max2)+min(min1,min2))/2;
                        }
                        else
                        {
                            return(int)(max(max1,max2));
                        }
                    }
                    else if(max1>max2) 
                    {
                        end1 = i1-1;
                    }
                    else
                    {
                        begin1 = i1+1;
                    }
            }
        }
    };