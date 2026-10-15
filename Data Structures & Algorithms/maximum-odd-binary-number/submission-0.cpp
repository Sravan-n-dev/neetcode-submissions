class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        
        for (char c : s) {
            if (c == '1') ones++;
        }
        
        int n = s.size();
        string ans(n, '0');
        
        for (int i = 0; i < ones - 1; i++) {
            ans[i] = '1';
        }
        
        ans[n - 1] = '1';
        
        return ans;
    }
};