class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st(allowed.begin(), allowed.end());

        int ans = 0;

        for (string &word : words) {
            bool ok = true;

            for (char c : word) {
                if (!st.count(c)) {
                    ok = false;
                    break;
                }
            }

            if (ok) ans++;
        }

        return ans;
    }
};