class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int white = 0;
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (blocks[i] == 'W') {
                white++;
            }

            if (i >= k - 1) {
                ans = min(ans, white);

                if (blocks[i - k + 1] == 'W') {
                    white--;
                }
            }
        }

        return ans;
    }
};