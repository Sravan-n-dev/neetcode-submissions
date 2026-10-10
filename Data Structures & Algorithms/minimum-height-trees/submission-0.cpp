class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) return {0};

        vector<vector<int>> adj(n);
        vector<int> degree(n, 0);

        for (auto& e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);

            degree[u]++;
            degree[v]++;
        }

        queue<int> q;

        for (int i = 0; i < n; i++) {
            if (degree[i] == 1) {
                q.push(i);
            }
        }

        int remaining = n;

        while (remaining > 2) {
            int sz = q.size();
            remaining -= sz;

            for (int i = 0; i < sz; i++) {
                int node = q.front();
                q.pop();

                for (int nei : adj[node]) {
                    degree[nei]--;

                    if (degree[nei] == 1) {
                        q.push(nei);
                    }
                }
            }
        }

        vector<int> ans;

        while (!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }

        return ans;
    }
};