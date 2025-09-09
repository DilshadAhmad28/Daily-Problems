class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int ch:nums){
            mp[ch]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b){
            if(mp[a]==mp[b]){
                return a>b;
              
            }
            return mp[b]>mp[a];
        });
       return nums; 
    }
};