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
        // vector<vector<int>> result;
        // if(!root){
        //     return result;
        // }
        // queue<TreeNode*> q;
        // q.push(root);
        // bool flag = true;
        // while(!q.empty()){
        //     deque<int> temp;
        //     int s = q.size();
        //     for(int i=0;i<s;i++){
        //         TreeNode* curr = q.front();
        //         q.pop();
        //         if(flag){
        //             temp.push_back(curr->val);
        //         }
        //         else{
        //             temp.push_front(curr->val);
        //         }
        //         if(curr->left){
        //             q.push(curr->left);
        //         }
        //         if(curr->right){
        //             q.push(curr->right);
        //         }
        //     }
        //     flag!=flag;
        //     result.push_back(vector<int>(temp.begin(),temp.end()));
        // }
        // return result;
        vector<vector<int>> result;
        if (!root) {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;  // true -> left to right, false -> right to left

        while (!q.empty()) {
            int size = q.size();
            deque<int> temp;  // Use deque to insert elements at front or back

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                
                if (flag) {
                    temp.push_back(curr->val);  // Insert normally
                } else {
                    temp.push_front(curr->val); // Insert in reverse order
                }

                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }

            result.push_back(vector<int>(temp.begin(), temp.end()));
            flag = !flag;  // Toggle flag for the next level
        }
        return result;

    }
};