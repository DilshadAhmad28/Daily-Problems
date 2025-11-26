class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> answer;
            for (int q : queries) {
             int sum = 0, count = 0;
                for (int num : nums) {
                    if (sum + num <= q) {
                            sum += num;
                            count++;
                    }
                    else {
                      break;
                    }
                }
                answer.push_back(count);
            }    

        return answer;
    }

};