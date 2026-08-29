class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n=nums.length;
        int pos=0;
        int neg=1;
        int[] ans=new int[n];
        for(int vl:nums){
            if(vl>=0){
                ans[pos]=vl;
                pos+=2;
            }
            else{
                ans[neg]=vl;
                neg+=2;
            }
        }
        return ans;
    }
}