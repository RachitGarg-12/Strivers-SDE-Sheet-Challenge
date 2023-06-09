void dfs(TreeNode<int>* root,int lev,vector<int>&ans){
        if(lev==ans.size()){ans.push_back(root->data);}
        if(root->left){dfs(root->left,lev+1,ans);}
        if(root->right){dfs(root->right,lev+1,ans);}
    }
vector<int> getLeftView(TreeNode<int> *root)
{
        if(root==NULL){return {};}
        vector<int> ans;
        dfs(root,0,ans);
        return ans;
}