class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {

        int i = 0;  // pointer for word
        int j = 0;  // pointer for abbr

        while (i < word.size() && j < abbr.size()) {

            // If abbreviation starts with 0, invalid
            if (abbr[j] == '0') {
                return false;
            }

            // If current character is a letter
            if (isalpha(abbr[j])) {

                if (word[i] != abbr[j]) {
                    return false;
                }

                i++;
                j++;
            }

            // If current character is a digit
            else {

                int num = 0;

                while (j < abbr.size() && isdigit(abbr[j])) {
                    num = num * 10 + (abbr[j] - '0');
                    j++;
                }

                i += num;
            }
        }

        // Both strings must be completely consumed
        return i == word.size() && j == abbr.size();
    }
};