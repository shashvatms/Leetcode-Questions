class Solution {
public:
    int checkheight(TreeNode* root){
       if(root==NULL){
            return 0;
       }
       int leftheight = checkheight(root->left);
       if(leftheight==-1){
            return -1;
       }
       int rightheight = checkheight(root->right);
       if(rightheight==-1){
            return -1;
       }
       if(abs(leftheight-rightheight)>1){
            return -1;
       }
       return 1 + max(leftheight,rightheight);
    }
    bool isBalanced(TreeNode* root) {
        int n = checkheight(root);
        return n!=-1;
    }
};