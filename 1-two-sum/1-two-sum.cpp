class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[target-nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end() && mp[nums[i]]!=i){ans.push_back(i);ans.push_back(mp[nums[i]]);break;}
        }
        return ans;
    }
};