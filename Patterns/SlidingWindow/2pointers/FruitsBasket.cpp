class Solution {
public:
    int totalFruits(vector<int> &arr) {
        int maxLen = 0;

        for(int i = 0; i < arr.size(); i++) {
            map<int, int> mp;
            int unqCount = 0;

            for(int j = i; j < arr.size(); j++) {
                if(mp.find(arr[j]) == mp.end()) {
                    unqCount++;
                }

                mp[arr[j]]++;

                if(unqCount <= 2) {
                    maxLen = max(maxLen, j - i + 1);
                } else {
                    break;
                }
            }
        }

        return maxLen;
    }
};

/*The above code is O(n^2) solution.*/

//TC O(n + n)
class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        
        int l=0,r=0,n=arr.size(),maxLen = 0;
        map<int,int> mp;
        while(r < n){
            mp[arr[r]]++;
            
            while(mp.size() > 2){
                mp[arr[l]]--;
                if(mp[arr[l]] == 0) mp.erase(arr[l]);
                l++;
            }
            maxLen = max(maxLen,r-l+1);
            r++;
        }
        
        return maxLen;
    }
};


//TC O(n)
class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        
        int l=0,r=0,n=arr.size(),maxLen = 0;
        map<int,int> mp;
        while(r < n){
            mp[arr[r]]++;
            
            if(mp.size() > 2){
                mp[arr[l]]--;
                if(mp[arr[l]] == 0) mp.erase(arr[l]);
                l++;
            }
            maxLen = max(maxLen,r-l+1);
            r++;
        }
        
        return maxLen;
    }
};
