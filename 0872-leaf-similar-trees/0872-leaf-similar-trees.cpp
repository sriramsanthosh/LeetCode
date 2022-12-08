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
    void getleafval(TreeNode* root, vector<int>& a){
        if(root == NULL){
            return ;
        }
        getleafval(root->left, a);
        if(root->left == NULL && root->right == NULL){
            a.push_back(root->val);
        }
        getleafval(root->right, a);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v, u;
        getleafval(root1, v);
        getleafval(root2, u);
        if(v.size() != u.size()){
            return false;
        }
        for(int i = 0; i<v.size(); i++){
            if(v[i] != u[i]){
                return false;
            }
        }
        return true;
    }
};