/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxsum = INT_MIN;
    int maxsumhelper(TreeNode* root){
        if(!root){
            return 0;
        }
        int left = max(0,maxsumhelper(root->left));
        int right = max(0,maxsumhelper(root->right));
        maxsum = max(maxsum, left + right + root->val);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int sum = maxsumhelper(root);
        return maxsum;
    }
};