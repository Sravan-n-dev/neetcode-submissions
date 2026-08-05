class Solution {
public:
    vector<vector<int>> dp;

    bool f(int i, int sum, vector<int>& nums) {

        if (sum == 0)
            return true;

        if (i == nums.size() || sum < 0)
            return false;

        if (dp[i][sum] != -1)
            return dp[i][sum];

        return dp[i][sum] =
            f(i + 1, sum, nums) ||
            f(i + 1, sum - nums[i], nums);
    }

    bool canPartition(vector<int>& nums) {

        int total = accumulate(nums.begin(), nums.end(), 0);

        if (total & 1)
            return false;

        int target = total / 2;

        dp.assign(nums.size(), vector<int>(target + 1, -1));

        return f(0, target, nums);
    }
};