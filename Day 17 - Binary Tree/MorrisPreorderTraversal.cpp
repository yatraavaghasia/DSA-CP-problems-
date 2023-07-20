#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector <int> ans;
    TreeNode *cur = root;
    while(cur!=NULL)
    {
        ans.push_back(cur->data);
        if(cur->left==NULL)
        {
            cur=cur->right;
        }
        else
        {
            TreeNode *prev = cur->left;
            while(prev->right!=NULL && prev->right!=cur->right)
            {
                prev=prev->right;
            }
            if(prev->right==NULL)
            {
                prev->right=cur->right;
                cur=cur->left;
            }
            else
            {
                prev->right=NULL;
                cur=cur->right;
            }
        }
    }
    return ans;
}
