class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;  // Initialize once for each starting index

            for (int j = i; j < n; j++) {
                sum += nums[j];  // Incrementally build the sum
                
                // Use modulo carefully to handle negatives
                if (sum % k == 0) {
                    count++;
                }
            }
        }

        return count;
    }
};