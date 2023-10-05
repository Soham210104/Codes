// You are given an array of N+2 integer elements.
//  All elements of the array are in the range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.
// Note: Return the numbers in their order of appearing twice. So, 
// if X and Y are the repeating numbers, and X repeats twice before Y repeating twice, then the order should be (X, Y).

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) 
    {
        // Your code here
        int ans[2];
        int digitCount[N+1] = {0};
        int j=0;
        for(int i=0;i<N+2;i++)
        {
            digitCount[arr[i]]++;
            if(digitCount[arr[i]] == 2)
            {
                ans[j] = arr[i];
                j++;
            }
            
        }
        vector<int> v;
        for(int i=0;i<2;i++)
        {
            v.push_back(ans[i]);
        }
        
        return v;
    }
};
