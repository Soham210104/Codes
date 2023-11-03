class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> arr1, vector<ll> arr2, int N)
    {
        //code here
        if(arr1.size() != arr2.size())
        {
            return false;
        }
       unordered_map<int,int> mp;
       for(int i=0;i<N;i++)
       {
           mp[arr1[i]]++;
       }
       
       for(int i=0;i<N;i++)
       {
           if(mp.find(arr2[i]) != mp.end()) //means if the second array element is present in first array.
           {
               auto it = mp.find(arr2[i]);
               if(it->second>0)
               {
                   it->second--;
               }
               else //if freq already 0 means not  present.
               {
                   return false;
               }
           }
           else
           {
               return false;
           }
       }
       return true;
    }
};