class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int n=nums.length;
        double window=0;
        for(int i=0;i<k;i++){
            window+=nums[i];
        }
        double maxsum=window;
        for(int i=k;i<n;i++){
            window=window-nums[i-k]+nums[i];
            if(window>maxsum){
                maxsum=window;
            }
        }
        return maxsum/k;
    }
}