class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> pos(26);

        for (int i = 0; i < 26; i++) {
            pos[order[i] - 'a'] = i;
        }

        for (int i = 0; i < (int)words.size() - 1; i++) {
            string a = words[i];
            string b = words[i + 1];

            int j = 0;
            while (j < a.size() && j < b.size()) {
                if (a[j] != b[j]) {
                    if (pos[a[j] - 'a'] > pos[b[j] - 'a']) {
                        return false;
                    }
                    break;
                }
                j++;
            }

            if (j == b.size() && a.size() > b.size()) {
                return false;
            }
        }

        return true;
    }
};