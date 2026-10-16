class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(0, nums, target, curr, ans);
        return ans;
    }

    void solve(int idx, vector<int>& nums, int target,
               vector<int>& curr, vector<vector<int>>& ans) {
        if (idx == nums.size()) {
            if (target == 0) {
                ans.push_back(curr);
            }
            return;
        }

        if (nums[idx] <= target) {
            curr.push_back(nums[idx]);
            solve(idx, nums, target - nums[idx], curr, ans);
            curr.pop_back();
        }

        solve(idx + 1, nums, target, curr, ans);
    }
};