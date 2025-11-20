class Solution {
public:
    int bestClosingTime(string customers) {
        int res = 0, maxi = 0;
        for(int i = 0, curr = 0, n = customers.size(); i < n; ++i){
            curr += (customers[i] == 'Y') ? 1 : -1;
            if(curr > maxi){
                maxi = curr;
                res = i + 1;
            }
        }
        return res;
    }
};