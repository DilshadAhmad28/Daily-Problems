class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());   
        int n = nums.size();
        int left = 0, right = n;
        while (left <= right) {
            int x = left + (right - left) / 2;
            int idx = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
            int count = n - idx;
            if (count == x) return x;
            else if (count > x) left = x + 1;
            else right = x - 1;
        }
        return -1;
    }
};
