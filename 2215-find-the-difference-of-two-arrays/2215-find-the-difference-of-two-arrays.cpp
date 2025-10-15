class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        vector<int> diff1, diff2;
        for (int n : s1) {
            if (s2.find(n) == s2.end()){
                diff1.push_back(n);
            }
        }
        for (int n : s2) {
            if (s1.find(n) == s1.end()){
                diff2.push_back(n);
            }
        }
        return{diff1, diff2};

    }
};