class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                cnt++;
            }
        }
        int k = n - cnt;
        vector<int> a(n);
        for(int i = 0;i < n;i++) {
            a[i] = 0;
        }
        int j = 0;
        int i = 0;
        while(k > 0) {
            if(nums[i] != 0) {
                a[j] = nums[i];
                j++;
                k--;
            }
            i++;
            
        }
        for(int i = 0;i < n;i++) {
            nums[i] = a[i];
        }
    }
};