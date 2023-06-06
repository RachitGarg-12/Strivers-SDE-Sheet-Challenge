void preorder(TreeNode* node,vector<int> &ans){
         if(node==NULL){return;}
        ans.push_back(node->data);
        preorder(node->left,ans);
        preorder(node->right,ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
        if(root==NULL){return {};}
        vector<int> ans;
        TreeNode *node=root;
        preorder(node,ans);
        return ans;
}