bool dfs(TreeNode<int> *root,int x,vector<int>&path){
	if(root==NULL){return false;}
	if(root->data==x){path.push_back(x);return true;}
	if(root->left){
		if(dfs(root->left,x,path)){
           path.push_back(root->data);
		   return true;
		}
	}
	if(root->right){
		if(dfs(root->right,x,path)){
           path.push_back(root->data);
		   return true;
		}
	}
	return false;
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{   
	vector<int> path;
    dfs(root,x,path);
	reverse(path.begin(),path.end());
	return path;
}