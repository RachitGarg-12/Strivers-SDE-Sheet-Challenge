vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
        if(root==NULL){return {};}
        map<int,vector<int>> m;
        queue<pair<TreeNode<int>*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto p=q.front();q.pop();
            TreeNode<int> *cur=p.first;
            int x=p.second;
            m[x].push_back(cur->data);
            if(cur->left){
                q.push({cur->left,x-1});
            }
            if(cur->right){
                q.push({cur->right,x+1});
            }
        } 
        vector<int> ans;
        for(auto i:m){
            cout<<i.first<<endl;
          for (auto j : i.second) {
            ans.push_back(j);
          }
        }
        return ans;
}