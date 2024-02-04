public:
    // Function to find list of all words possible by pressing given numbers.
    void solveString(int a[], int N, vector<string> &ans, string output, int index, string map[]) {
        if (index >= N) {
            ans.push_back(output);
            return;
        }

        int digit = a[index];
        if (digit >= 0 && digit <= 9) {
            string characters = map[digit];
            for (int i = 0; i < characters.length(); i++) {
                solveString(a, N, ans, output + characters[i], index + 1, map);
            }
        }
    }

    vector<string> possibleWords(int a[], int N) {
        // Your code here
        vector<string> ans;
        if (N == 0) {
            return ans;
        }

        string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output = "";
        int index = 0;
        solveString(a, N, ans, output, index, map);

        return ans;
    }
};