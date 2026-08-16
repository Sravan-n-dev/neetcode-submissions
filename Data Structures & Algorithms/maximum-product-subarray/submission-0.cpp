class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0];
        int curMin = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];

            int oldMax = curMax;
            int oldMin = curMin;

            curMax = max({x, oldMax * x, oldMin * x});
            curMin = min({x, oldMax * x, oldMin * x});

            ans = max(ans, curMax);
        }

        return ans;
    }
};