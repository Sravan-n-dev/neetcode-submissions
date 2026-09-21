class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }
    
private:
    void inorderHelper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        
        // Traverse left subtree
        inorderHelper(node->left, result);
        // Visit node
        result.push_back(node->val);
        // Traverse right subtree
        inorderHelper(node->right, result);
    }
};