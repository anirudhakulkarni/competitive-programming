/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        int rob1=0,rob2=0;
        rob1=nums[0];
        rob2=max(nums[0],nums[1]);
        int ans=rob2;
        for(int i=2;i<nums.size();i++){
            ans=max(rob1+nums[i],rob2);
            rob1=rob2;
            rob2=ans;
        }
        return rob2;
    }
};
// @lc code=end

