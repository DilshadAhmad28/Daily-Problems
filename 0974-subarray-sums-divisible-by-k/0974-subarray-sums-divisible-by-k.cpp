class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remainderFreq;
        remainderFreq[0] = 1; // To handle subarrays starting from index 0
        
        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;
            
            int remainder = prefixSum % k;
            if (remainder < 0)  // handle negative remainders
                remainder += k;
            
            // If this remainder was seen before, add its frequency to count
            if (remainderFreq.find(remainder) != remainderFreq.end()) {
                count += remainderFreq[remainder];
            }
            
            remainderFreq[remainder]++;
        }
        
        return count;
    }
};