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
    void traversal(TreeNode* root,int mini,int maxi,int &ans){
        if(root==NULL){
            return ;
        }
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        ans=max(ans,max(abs(maxi-root->val),abs(mini-root->val)));
        traversal(root->left,mini,maxi,ans);
        traversal(root->right,mini,maxi,ans);
    }
    
    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        traversal(root,root->val,root->val,ans);
        return ans;
    }
};