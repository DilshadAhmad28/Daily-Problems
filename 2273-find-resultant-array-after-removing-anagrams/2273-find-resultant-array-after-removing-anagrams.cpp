class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        vector<int> prevFreq;

        for (string &word : words) {
            vector<int> currFreq(26, 0);
            
            for (char c : word) {
                currFreq[c - 'a']++;
            }

            
            if (result.empty() || currFreq != prevFreq) {
                result.push_back(word);
                prevFreq = currFreq;
            }
        }
        return result;
    }
};
