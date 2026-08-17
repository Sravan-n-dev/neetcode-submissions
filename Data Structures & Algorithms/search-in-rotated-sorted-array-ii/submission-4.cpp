class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0; 
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Target found
            if (nums[mid] == target) {
                return true;
            }
            
            // Handle duplicates: we can't tell which half is sorted
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
            }
            // Left half is perfectly sorted
            else if (nums[left] <= nums[mid]) {
                // Check if target is strictly within the sorted left half
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // Right half is perfectly sorted
            else {
                // Check if target is strictly within the sorted right half
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        
        return false;
    }
};