// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_set<int>st;
//         for(int val:nums){
//             if(st.find(val)!=st.end()){
//                 return val;
//             }
//             st.insert(val);
//         }
//        return -1; 
//     }
// };

//optimize approach
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int slow=nums[0], fast=nums[0];
       do{
        slow=nums[slow];
        fast=nums[nums[fast]];
       } while(slow!=fast);
       slow=nums[0];
       while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
       }
       return slow;
    }
};