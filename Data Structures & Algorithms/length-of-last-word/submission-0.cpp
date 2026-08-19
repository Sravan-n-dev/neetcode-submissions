class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int ans = 0;

        // Count last word
        while (i >= 0 && s[i] != ' ') {
            ans++;
            i--;
        }

        return ans;
    }
};