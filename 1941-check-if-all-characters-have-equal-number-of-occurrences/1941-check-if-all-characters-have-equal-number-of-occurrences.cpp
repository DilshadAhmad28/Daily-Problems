class Solution {
public:
    bool areOccurrencesEqual(string s) {
      unordered_map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }
        // reference frequency
        int freq = mp.begin()->second;
        for (auto j : mp) {
            if (j.second != freq) {
             return false;
            }
        }
        return true;
    }
};