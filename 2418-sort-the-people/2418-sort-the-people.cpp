class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string>mp;
        for(int i=0;i<heights.size();i++){
            int st=heights[i];
            mp[st]=names[i];
        }
        vector<string> ans(heights.size());  
        int j = heights.size() - 1;
        for (const auto& pair : mp) {
            ans[j--] = pair.second; 
        }
        return ans;

    }
};