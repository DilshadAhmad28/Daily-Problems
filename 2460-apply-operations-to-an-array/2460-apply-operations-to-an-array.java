class Solution {
    public int[] applyOperations(int[] nums) {
        int n=nums.length;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int pos = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] != 0){
                int temp = nums[pos];
                nums[pos] = nums[i];
                nums[i] = temp;
                pos++;
            }
        }
        return nums;
    }
}