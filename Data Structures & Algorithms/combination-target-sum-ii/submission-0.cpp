class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        sort(candidates.begin(), candidates.end());

        solve(0, target, candidates, temp, ans);

        return ans;
    }

    void solve(int index, int target, vector<int>& candidates,
               vector<int>& temp, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            temp.push_back(candidates[i]);

            solve(i + 1, target - candidates[i], candidates, temp, ans);

            temp.pop_back();
        }
    }
};