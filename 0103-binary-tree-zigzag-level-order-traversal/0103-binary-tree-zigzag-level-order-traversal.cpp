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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*> q;
        bool flag = true;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            deque<int> temp;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(flag){
                    temp.push_back(node->val);
                }
                else{
                    temp.push_front(node->val);
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            ans.push_back(vector<int>(temp.begin(),temp.end()));
            flag = !flag;
        }
        return ans;
    }
};