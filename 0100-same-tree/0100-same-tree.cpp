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
    bool helper(TreeNode* root1, TreeNode* root2){
        if(root1==NULL&&root2==NULL){
            return true;
        }
        if(root1==NULL||root2==NULL){
            return false;
        }
        if(root1->val!=root2->val){
            return false;
        }
        bool leftres = helper(root1->left,root2->left);
        bool rightres = helper(root1->right,root2->right);
        return leftres && rightres;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool res = helper(p,q);
        return res;
    }
};