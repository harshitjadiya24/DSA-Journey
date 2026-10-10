class Solution {
public:
    void preorder(TreeNode* root, vector<TreeNode*>& nodes) {
        if (root == NULL) return;

        nodes.push_back(root);
        preorder(root->left, nodes);
        preorder(root->right, nodes);
    }

    void flatten(TreeNode* root) {
        vector<TreeNode*> nodes;
        preorder(root, nodes);

        for (int i = 0; i < nodes.size(); i++) {
            nodes[i]->left = NULL;

            if (i + 1 < nodes.size())
                nodes[i]->right = nodes[i + 1];
            else
                nodes[i]->right = NULL;
        }
    }
};