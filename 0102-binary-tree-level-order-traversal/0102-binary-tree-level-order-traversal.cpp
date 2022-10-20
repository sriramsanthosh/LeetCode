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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> u;
        if(root == NULL){
            return u;
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<int> v;
        while(q.empty() == false){
            int count = q.size();
            for(int i = 0; i<count; i++){
                TreeNode* front = q.front();
                q.pop();
                v.push_back(front->val);
                if(front->left!=NULL){q.push(front->left);}
                if(front->right!=NULL){q.push(front->right);}
            }
            if(v.empty() == false)
            u.push_back(v);
            v.clear();  
        }
        return u;
    }
};