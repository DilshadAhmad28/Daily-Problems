class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mp;
        for (auto &x : nums1) {
            mp[x[0]] += x[1];
        }
        for (auto &x : nums2) {
            mp[x[0]] += x[1];
        }
        vector<vector<int>>ans;
        for (auto &p : mp) {
            ans.push_back({p.first, p.second});
        }
        return ans;
    }
};