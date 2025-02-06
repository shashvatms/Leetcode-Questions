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
        if (!root) return true; // Empty tree is balanced

        stack<TreeNode*> st;
        unordered_map<TreeNode*, int> height; // Store subtree heights
        unordered_map<TreeNode*, bool> visited; // Track visited nodes

        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();

            if (node->left && !visited[node->left]) {
                st.push(node->left);
            } else if (node->right && !visited[node->right]) {
                st.push(node->right);
            } else {
                st.pop();
                int leftHeight = height[node->left];
                int rightHeight = height[node->right];

                // If unbalanced, return false
                if (abs(leftHeight - rightHeight) > 1) return false;

                // Store height of the current node
                height[node] = max(leftHeight, rightHeight) + 1;
                visited[node] = true;
            }
        }
        return true;
    }
};