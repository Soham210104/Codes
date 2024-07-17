class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string t = str;
        sort(t.begin(),t.end());
        int u = 0,l=0;
        
        for(int i=0;i<n;i++){
            if(t[i]>='A' && t[i]<='Z'){
                u = i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(t[i]>='a' && t[i]<='z'){
                l = i;
                break;
            }
        }
        string res;
        for(int i=0;i<n;i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                res += t[u];
                u++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z'){
                res += t[l];
                l++;
            }
        }
        
        return res;
    }
};