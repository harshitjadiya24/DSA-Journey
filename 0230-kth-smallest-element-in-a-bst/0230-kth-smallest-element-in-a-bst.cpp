class Solution {
public:
    void inorder(TreeNode* node, vector<int>& ans) {
        if (!node) return;
        inorder(node->left, ans);
        ans.push_back(node->val);
        inorder(node->right, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);
        return ans[k - 1];
    }
};