/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int size = nums.size();
        unordered_map<int, int> m;

        for(int i = 0;i<size;i++){
            int tar = target - nums[i];
            auto itr = m.find(tar);
            if(itr!=m.end())
                return {itr->second,i};
            else m[nums[i]] = i;
        }
        return{};
    }
};
// @lc code=end

