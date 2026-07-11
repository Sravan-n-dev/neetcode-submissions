class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int mn = INT_MAX;

        while (left <= right) {

            // Entire search space is sorted
            if (nums[left] <= nums[right]) {
                mn = min(mn, nums[left]);
                break;
            }

            int mid = left + (right - left) / 2;

            if (nums[left] <= nums[mid]) {
                // Left half is sorted
                mn = min(mn, nums[left]);
                left = mid + 1;
            } else {
                // Right half is sorted
                mn = min(mn, nums[mid]);
                right = mid - 1;
            }
        }

        return mn;
    }
};