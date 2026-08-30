class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);

        for(char c : s) {
            freq[c - 'a']++;
        }

        int maxOdd = 0;
        int minEven = INT_MAX;

        for(int f : freq) {
            if(f == 0) continue;

            if(f % 2 == 1) {
                maxOdd = max(maxOdd, f);
            }
            else {
                minEven = min(minEven, f);
            }
        }

        return maxOdd - minEven;
    }
};