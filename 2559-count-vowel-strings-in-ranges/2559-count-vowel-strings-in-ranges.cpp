class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        unordered_set<char> isVowels = {'a','e','i','o','u'};
        
        // Step 1: Build check array (1 if word starts and ends with vowel, else 0)
        vector<int> check(n, 0);
        for (int i = 0; i < n; i++) {
            string str = words[i];
            if (isVowels.count(str.front()) > 0 && isVowels.count(str.back()) > 0) {
                check[i] = 1;
            }
        }

        // Step 2: Build prefix sum
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + check[i];
        }

        // Step 3: Answer queries using prefix sum
        vector<int> ans;
        for (auto &q : queries) {
            int li = q[0];
            int ri = q[1];
            ans.push_back(prefix[ri + 1] - prefix[li]);
        }

        return ans;
    }
};
