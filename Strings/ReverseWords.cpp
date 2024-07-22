class Solution {
public:
    // Function to reverse words in a given string.
    string reverseWords(string S) {
        vector<string> v;
        string res = "";
        int i = 0;

        while (i < S.length()) {
            char c = S[i];

            if (c == '.') {
                v.push_back(res);
                res = "";
            } else {
                res += c;
            }

            i++;
        }
        if (res.length() != 0) {
            v.push_back(res);
        }
        res = "";

        for (int i = v.size() - 1; i >= 0; i--) {
            res += v[i];
            if (i != 0) {
                res += '.';
            }
        }

        return res;
    }
};