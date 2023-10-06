// You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the student with the most books allocated to him gets the minimum number of pages, out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int arr[],int n,int m,int mid)
    {
        int studentCount = 1;//keeping the students count
        int pageSum = 0;//we are adding and comparing this with mid if its lesser to make a boundary.
        
        for(int i=0;i<n;i++)
        {
            if(pageSum + arr[i] <= mid)
            /*means now 10 20 30 40 then pageSum 0 + 10..then pageSum 10 now 10 + 20 
            means pageSum 30...now 30 + 30 pageSum is 60 thus we remoove 30 and keep 10+20+30 */
            {
                pageSum += arr[i];//total number pages alloted for first student.
            }
            else
            {
                studentCount++;//incremenet studentCount when pageSum is greater
                if(studentCount>m || arr[i]>mid)//studentCount greater than m student
                {
                    return false; 
                }
                pageSum = arr[i]; //for second student we started from 30
            }
        }
        return true;
    }
    
    
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int s = 0;//start
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        
        int e = sum; // stored the end as the max sum possible
        int ans = -1;//where our possible solutions sum will be stored
        if(m>n)
        {
            return -1;
        }
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(isPossible(arr,n,m,mid))//if our mid is the possible solution
            {
                ans = mid; // then store the mid in the ans and make end to mid-1
                e = mid - 1;
            }
            else
            {
                s=mid+1;//no solution exist thus change our start to mid + 1
            }
            mid = s+(e-s)/2;//change our mid means search space  
        }
        return ans;
    }
};