class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> pmap;
        unordered_map<string,char> smap;
        stringstream ss(s);
        string word;

        vector<string> words;
        while(ss >> word){
            words.push_back(word);
        }

        if(words.size() != pattern.size()) return false;

        for(int i = 0; i < pattern.size(); i++){
            if(pmap.count(pattern[i])){
                if(pmap[pattern[i]] != words[i]) return false;
            }else{
                pmap[pattern[i]] = words[i];
            }

            if(smap.count(words[i])){
                if(smap[words[i]] != pattern[i]) return false;
            }else{
                smap[words[i]] = pattern[i];
            }
        }
        return true;
    }
};