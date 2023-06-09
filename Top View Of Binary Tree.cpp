vector<int> getTopView(TreeNode<int> *root) {
        if(root==NULL){return {};}
        map<int,int> m;
        queue<pair<TreeNode<int>*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto p=q.front();q.pop();
            TreeNode<int> *cur=p.first;
            int x=p.second;
            if(m.find(x)==m.end()){m[x]=(cur->val);}
            if(cur->left){
                q.push({cur->left,x-1});
            }
            if(cur->right){
                q.push({cur->right,x+1});
            }
        } 
        vector<int> ans;
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
}