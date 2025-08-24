class Solution {
public:
   vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int> v(26, 0);
        // Initialize with first word
        for (char c : words[0]){
            v[c - 'a']++;
        }
        
        for (int i = 1; i < n; i++){
            vector<int> v1(26, 0);
            for (char c : words[i]){
                v1[c - 'a']++;
            }
            for (int j = 0; j < 26; j++){
                v[j] = min(v[j], v1[j]);
            }
        }
        
        vector<string> ans;
        for (int i = 0; i < 26; i++){
            for (int j = 0; j < v[i]; j++){
                ans.push_back(string(1, i + 'a'));
            }
        }
        return ans;
    }
};