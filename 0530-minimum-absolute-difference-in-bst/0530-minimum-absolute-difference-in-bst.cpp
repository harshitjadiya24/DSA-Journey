class Solution {
public:
    void inorder(TreeNode* node, vector<int>& ans) {
        if (node == NULL) return;

        inorder(node->left, ans);
        ans.push_back(node->val);
        inorder(node->right, ans);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);

        int mini = INT_MAX;

        for (int i = 1; i < ans.size(); i++) {
            mini = min(mini, ans[i] - ans[i - 1]);
        }

        return mini;
    }
};