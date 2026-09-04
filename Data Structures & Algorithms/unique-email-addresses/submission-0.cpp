class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> unique;

        for (string email : emails) {
            int at = email.find('@');

            string local = email.substr(0, at);
            string domain = email.substr(at + 1);

            int plus = local.find('+');
            if (plus != string::npos) {
                local = local.substr(0, plus);
            }

            string cleaned;
            for (char c : local) {
                if (c != '.') {
                    cleaned += c;
                }
            }

            unique.insert(cleaned + "@" + domain);
        }

        return unique.size();
    }
};