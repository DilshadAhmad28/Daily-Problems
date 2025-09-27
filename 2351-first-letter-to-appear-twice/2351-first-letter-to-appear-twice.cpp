class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            char n=s[i];
            if(st.find(n)!=st.end()){
                return n;
            }
            st.insert(n);
        }
        return n;
    }
};