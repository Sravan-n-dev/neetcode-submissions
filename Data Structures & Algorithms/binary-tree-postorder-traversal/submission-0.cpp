class Solution {
public:
    void postorder(TreeNode* root, vector<int>& ans) {
        if (root == nullptr) {
            return;
        }

        postorder(root->left, ans);   // Left
        postorder(root->right, ans);  // Right
        ans.push_back(root->val);     // Root
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;

        postorder(root, ans);

        return ans;
    }
};