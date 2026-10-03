class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;

        if (root == nullptr)
            return ans;

        for (Node* child : root->children) {
            vector<int> temp = postorder(child);
            ans.insert(ans.end(), temp.begin(), temp.end());
        }

        ans.push_back(root->val);

        return ans;
    }
};