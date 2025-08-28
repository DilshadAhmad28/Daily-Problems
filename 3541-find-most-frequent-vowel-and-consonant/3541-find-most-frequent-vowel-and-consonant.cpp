class Solution {
public:
    int maxFreqSum(string s) {
        int v=0;
        int c=0;
        unordered_map<char, int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        unordered_set<char> st = {'a','e','i','o','u'};
        for(auto it:mp){
            if(st.find(it.first)!=st.end()){
                v=max(v,it.second);
            }
            else{
                c=max(c,it.second);
            }
        }
        return v+c;
    }
};