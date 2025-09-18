class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        unordered_map<char,int>m;
        unordered_map<char,int>p;
        int count=0;
        for(int i = 0; i < n; i++){
            char c = word[i];
            if(islower(c)){
                m[c]=i;
            }    
        }
        for(int i = 0; i < n; i++){
            char ch = word[i];
            if(isupper(ch)){
               if(p.find(ch)==p.end()) { // keep only first occurrence
                    p[ch] = i;
                }
            }
        }
        for (auto &it : m) {
            char lower = it.first;
            char upper = toupper(lower);
            if (p.count(upper) && it.second < p[upper]) {
                count++;
            }
        }
        return count;
    }
}; 