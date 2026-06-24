class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        vector<pair<int,int>> ts;
        int i = 0;
        for(auto& a: nums) {
            ts.push_back({a,i});
            i++;
        }
        vector<int> ans;
        sort(ts.begin(),ts.end());
        while(true) {
            if(ts[l].first + ts[r].first == target) {
                ans.push_back(ts[l].second);
                ans.push_back(ts[r].second);
                break;
            }else if (ts[l].first + ts[r].first > target) {
                r--;
            }else {
                l++;
            }
        }
       if(ans[0]>ans[1]){
        int t;
        t = ans[1];
        ans[1] = ans[0];
        ans[0] = t;
       }
        return ans;
    }
};
