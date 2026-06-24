class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(auto& x: nums) freq[x]++;
        vector<pair<int,int>> f;
        for(auto &x : freq) {
            f.push_back({x.second,x.first});
        }
        vector<int> ans;
        sort(f.rbegin(),f.rend());
        for(int i = 0; i < k; i++) {
            ans.push_back(f[i].second);
        }
    return ans;
    }
};
