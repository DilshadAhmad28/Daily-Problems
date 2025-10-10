class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> a;
        for(int i:nums){
            if(i%2==0){
                a[i]++;
            } 
        }
        int b=0,ans=-1;
        for(auto i:a) {
            if(i.second>b){
                b=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};
