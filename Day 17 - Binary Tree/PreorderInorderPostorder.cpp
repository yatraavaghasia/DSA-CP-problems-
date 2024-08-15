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
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    stack <pair<TreeNode*,int>> st;
    vector <int> pre, inorder, post;
    st.push({root,1});
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        TreeNode* node = it.first;
        int ord = it.second;
        if(ord==1){
            pre.push_back(node->data);
            st.push({node,2});
            if(node->left!=NULL) st.push({node->left,1});
        } else if(ord==2){
            inorder.push_back(node->data);
            st.push({node,3});
            if(node->right!=NULL) st.push({node->right,1});
        } else {
            post.push_back(node->data);
        }
    }
    return {inorder,pre,post};
}
