class Solution {
public:
    int maxScore(string s) {
        int rightOnes = 0;

        // Count all 1s
        for (char c : s) {
            if (c == '1') {
                rightOnes++;
            }
        }

        int leftZeros = 0;
        int maxScore = 0;

        // Don't include the last character,
        // because the right substring must be non-empty
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '0') {
                leftZeros++;
            } else {
                rightOnes--;
            }

            int score = leftZeros + rightOnes;
            maxScore = max(maxScore, score);
        }

        return maxScore;
    }
};