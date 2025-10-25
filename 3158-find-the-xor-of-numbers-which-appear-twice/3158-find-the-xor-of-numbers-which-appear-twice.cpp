class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int val : nums){
            mp[val]++;
        }
        int ans=0;
        for(auto& [num, count] : mp){
            if(count == 2)
            ans ^= num;
        }
        return ans;
    }
};