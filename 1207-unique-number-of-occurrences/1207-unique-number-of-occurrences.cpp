class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m1;
        for (auto i : arr) {
            m1[i] += 1;
        }
        unordered_set<int> s1;

        for (auto i : m1) {
            s1.insert(i.second);
        }
        return s1.size() == m1.size();
    }
};