class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int num:arr){
            mp[num]++;
        }
        unordered_set<int>s;
        for(auto i:mp){
            s.insert(i.second);
        }
        return s.size()==mp.size();
    }
};