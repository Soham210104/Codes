class Solution {
public:
    bool areIsomorphic(string s1, string s2) {
        if (s1.length() != s2.length()) return false;

        map<char, char> charMap;

        for (int i = 0; i < s1.length(); ++i) {
            char c1 = s1[i];
            char c2 = s2[i];

            
            if (charMap.find(c1) != charMap.end()) {
                if (charMap[c1] != c2)
                    return false; 
            } else {
                for (auto it = charMap.begin(); it != charMap.end(); ++it) {
                    if (it->second == c2)
                        return false; 
                }
                charMap[c1] = c2;
            }
        }

        return true;
    }
};