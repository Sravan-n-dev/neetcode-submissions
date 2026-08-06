class Solution {
public:
    bool validPalindrome(string s) {

        bool ok = false;

        int n = s.size();

        int left = 0;
        int right = n - 1;

        while (left < right) {

            if (s[left] == s[right]) {
                left++;
                right--;
            }
            else {

                // We are allowed to delete only one character.
                if (ok)
                    return false;

                ok = true;

                // Try deleting s[left].
                int l1 = left + 1;
                int r1 = right;

                bool first = true;

                while (l1 < r1) {
                    if (s[l1] != s[r1]) {
                        first = false;
                        break;
                    }

                    l1++;
                    r1--;
                }

                if (first)
                    return true;

                // Deleting s[left] did not work.
                // Now try deleting s[right].
                int l2 = left;
                int r2 = right - 1;

                while (l2 < r2) {
                    if (s[l2] != s[r2]) {
                        return false;
                    }

                    l2++;
                    r2--;
                }

                return true;
            }
        }

        return true;
    }
};