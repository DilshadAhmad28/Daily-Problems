class Solution {
public:
    int less = INT_MAX;
    int more = 0;
    unordered_set<string> dict;
    string s;
    int n;
    bool ans;
    vector<bool> memo;
    bool wordBreak(string ss, vector<string>& wordDict) {
        swap(ss, s);
        n = s.size();
        memo = vector<bool>(n);
        //generating our hash table for O(1) checks
        for(auto& word: wordDict){
            dict.insert(word);
            if(word.size() < less) less = word.size();
            if(word.length() > more) more = word.length();
        }
        if(s.length() < less) return false; 
        helper(0);
        return ans;
    }
    void helper(int begin){
        if(memo[begin]) return;
        if(begin == n) ans = true;

        for(int i = less; i <= more; i++){
            if(i+begin-1 >= n) break;
            if(dict.count(s.substr(begin, i))){
                helper(begin+i);
            }
        }
        memo[begin] = true;
    }
};