class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int k=3;
        int count=0;
        for(int i=0;i<=n-k;i++){
            string sub=s.substr(i,k);
            if(sub[0]!=sub[1] && sub[0]!=sub[2] && sub[1]!=sub[2]){
                count++;
            }
        }
        return count;
    }
};