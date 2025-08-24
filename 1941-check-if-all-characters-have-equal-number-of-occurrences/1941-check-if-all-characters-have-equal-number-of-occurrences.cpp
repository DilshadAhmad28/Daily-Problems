class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        unordered_map<char, int>mp;
        for(auto ch : s){
            mp[ch]++;
        }
        int c=mp[s[0]];
        // for(auto i : mp){
        //     c=i.second;
        //     mp.erase(i.first);
        //     break;
            
        // }

        for(auto j : mp){
            if(j.second!=c){
                return false;
            }
        }
        return true;
    }
};