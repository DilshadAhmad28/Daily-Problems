class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> li=new ArrayList<>();
        HashSet<List<Integer>> se=new HashSet<>();
        Arrays.sort(nums);
        int n=nums.length;
        for(int i=0;i<n;i++){
            int a,b;
            a=i+1;
            b=n-1;
            while(a<b){
                if(nums[i]+nums[a]+nums[b]==0){
                    List<Integer> temp=new ArrayList<>();
                    temp.add(nums[i]);
                    temp.add(nums[a]);
                    temp.add(nums[b]);
                    se.add(temp);
                    b--;
                }
                else if(nums[i]+nums[a]+nums[b]>0){
                    b--;
                }
                else{
                    a++;
                }
            }
        }
        for(List<Integer> t:se){
            li.add(t);
        }
        return li;
    }
}