class Solution {
    public boolean canJump(int[] nums) {
        int reachability=0;
        for(int i=0;i<nums.length;i++)
        {
            if(reachability<i)
                return false;
            reachability=Math.max( reachability,i+nums[i]);
        }
        return true;
    }
}