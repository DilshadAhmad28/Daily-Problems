class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int, int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(auto it:operations){
            int indx=mp[it[0]];
            nums[indx]=it[1];
            mp[it[1]]=indx;
        }
        return nums;
    }
};