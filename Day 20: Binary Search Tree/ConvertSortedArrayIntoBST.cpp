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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()) return NULL;
        int mid = n/2;
        TreeNode* root = new TreeNode(nums[mid],NULL,NULL);
        queue <pair<TreeNode*,pair<int,int>>> q;
        q.push({ root, { 0, mid - 1 } });
        q.push({ root, { mid + 1, n - 1 } });
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* parent = it.first;
            int left = it.second.first;
            int right = it.second.second;
            if(left<=right && parent!=NULL){
                int mid = (left+right)/2;
                TreeNode* node = new TreeNode(nums[mid],NULL,NULL);
                if(nums[mid]<parent->val){
                    parent->left=node;
                } else {
                    parent->right=node;
                }
                q.push({node,{left,mid-1}});
                q.push({node,{mid+1,right}});
            }
        }
        return root;
    }
};
