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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map <int, map<int,multiset<int>>> nodes;
        queue <pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            int hd = it.second.first;
            int level = it.second.second;
            nodes[hd][level].insert(node->val);
            if(node->left) q.push({node->left,{hd-1,level+1}});
            if(node->right) q.push({node->right,{hd+1,level+1}});
        }
        vector <vector<int>> ans;
        for(auto p:nodes){
            vector <int> col;
            for(auto p1:p.second){
                col.insert(col.end(),p1.second.begin(),p1.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
