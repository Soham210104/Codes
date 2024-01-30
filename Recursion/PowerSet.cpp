#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> subsets(string s, string curr, int i, vector<string> &ans)
{
    if (i == s.length())
    {
        ans.push_back(curr);
        return ans;
    }

   
    subsets(s, curr, i + 1, ans);

  
    curr += s[i];
    subsets(s, curr, i + 1, ans);

    return ans;
}


vector<string> powerSet(string s)
{
    string curr = "";
    int i = 0;
    vector<string> ans;
    subsets(s, curr, i, ans);

  
    sort(ans.begin(), ans.end());

    return ans;
}