class Solution {
public:
    vector<int> ans;

    void preorder(TreeNode* root) {
        if (root == nullptr)
            return;

        ans.push_back(root->val);  // Root
        preorder(root->left);      // Left
        preorder(root->right);     // Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};