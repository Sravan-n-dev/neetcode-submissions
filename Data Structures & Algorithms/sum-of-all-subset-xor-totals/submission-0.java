
class Solution {
    public int subsetXORSum(int[] nums) {
        int n = nums.length;
        int ans = 0;

        // Iterate over all subsets
        for (int mask = 0; mask < (1 << n); mask++) {
            int xor = 0;

            // Check which elements are included
            for (int i = 0; i < n; i++) {
                if ((mask & (1 << i)) != 0) {
                    xor ^= nums[i];
                }
            }

            ans += xor;
        }

        return ans;
    }
}
