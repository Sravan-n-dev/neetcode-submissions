class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans{};
        int res{};
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1){
                ans++;
            }else{
                ans = 0;
            }
            res = max (res, ans);
        }
        return res;
    }
};