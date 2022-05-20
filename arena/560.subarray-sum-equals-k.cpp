/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;

        // vector<int> prefixsum(n+1,0);
        // int prefixsum[n+1]={0};
        map<int,int> mp;
        int currsum=0;
        // mp[prefixsum[0]]=0;
        // mp.insert(0);
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            if(currsum==k){ans++;}
            if(mp.find(currsum-k)!=mp.end()){ans+=mp[currsum-k];}
            // prefixsum[i]=nums[i]+prefixsum[i-1];
            mp[currsum]++;
            // mp.insert(prefixsum[i+1]);
        }
        return ans;

    }
};
// @lc code=end

