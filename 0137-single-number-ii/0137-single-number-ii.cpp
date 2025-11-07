class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto [val,freq]:mpp){
            if(freq==1)
               return val;
        }
        return -1;
    }
};