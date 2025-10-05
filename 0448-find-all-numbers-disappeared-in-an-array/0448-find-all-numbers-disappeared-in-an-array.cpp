class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        //1 2 3 4 
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(s.find((i+1))==s.end()){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};