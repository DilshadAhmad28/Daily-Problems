class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int v:nums){
            mp[v]++;
        }
        for (const auto& pair : mp) {
            if(pair.second%2==1){
                return false;
            }
        }
        return true;
    }
};