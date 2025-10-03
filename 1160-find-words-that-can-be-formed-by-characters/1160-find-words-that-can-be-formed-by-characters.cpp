class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(char ch:chars){
            mp[ch]++;
        }
        int ans=0;
        for(string word:words){
            unordered_map<char,int>mymp;
            for(char c:word){
                mymp[c]++;
            }
            bool temp=true;
            for(auto& it:mymp){
                if(mp[it.first]<it.second){
                    temp=false;
                    break;
                }
            }
            if(temp){
                ans+=word.size();
            }
        }
        return ans;
    }
};