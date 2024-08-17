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
bool helper(TreeNode* root, long long lb, long long ub){
    if(root==NULL) return true;
    if((root->val>=ub)||(root->val<=lb)) return false;
    return helper(root->left,lb,root->val) && helper(root->right,root->val,ub);
}
    bool isValidBST(TreeNode* root) {
        return helper(root,-1000000000000,+1000000000000);
    }
};
