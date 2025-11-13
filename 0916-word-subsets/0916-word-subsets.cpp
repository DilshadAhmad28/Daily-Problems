class Solution {
public:
    vector<int> countFreq(string word) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        return freq;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> maxFreq(26, 0);
        for (string b : words2) {
            vector<int> freqB = countFreq(b);
            for (int i = 0; i < 26; i++) {
                maxFreq[i] = max(maxFreq[i], freqB[i]);
            }
        }
        vector<string> result;
        for (string a : words1) {
            vector<int> freqA = countFreq(a);
            bool isUniversal = true;
            for (int i = 0; i < 26; i++) {
                if (freqA[i] < maxFreq[i]) {
                    isUniversal = false;
                    break;
                }
            }
            if (isUniversal)
            result.push_back(a);
        }
        return result;
    }
};
