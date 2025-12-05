class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; ++i){
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        int ans=0;
        for(int i=0;i<n-1; i++){
            if((prefixSum[i]-(prefixSum[n-1]-prefixSum[i]))%2==0){
                ans++;
            }
            
        }
        return ans;
    }
};