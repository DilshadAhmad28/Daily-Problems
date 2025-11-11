class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int count = 0;
        vector<int> ans; 
        for (auto i : seq){
            if (i == '('){ 
                count++; 
            }
            ans.push_back(count % 2); 
            if (i == ')'){ 
                count--;
            }
        }
        return ans; 
    }
};