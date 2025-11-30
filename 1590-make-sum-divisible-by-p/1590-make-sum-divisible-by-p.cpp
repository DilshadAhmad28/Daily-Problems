class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long total_sum = 0;
        for (int num : nums) {
            total_sum += num;
        }
        int k = total_sum % p;
        if (k == 0) {
            return 0;
        }
        int min_len = n;
        unordered_map<int, int> last;
        last[0] = -1;
        int current_prefix_sum_rem = 0;
        for (int i = 0; i < n; ++i) {
            current_prefix_sum_rem = (current_prefix_sum_rem + nums[i]) % p;
            int target_rem = (current_prefix_sum_rem - k + p) % p;
            if (last.count(target_rem)) {
                int j = last.at(target_rem);
                min_len = std::min(min_len, i - j);
            }
            last[current_prefix_sum_rem] = i;
        }
        return (min_len < n) ? min_len : -1;
    }
};