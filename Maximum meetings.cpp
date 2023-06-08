#include <bits/stdc++.h> 

bool static cmp(vector<int>&a,vector<int>&b){
    if(a[0]==b[0]){
        return a[2]<b[2];
    }
    return a[0]<b[0];
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    vector<vector<int>> s;
    int n=start.size();
    for(int i=0;i<n;i++){
        s.push_back({end[i],start[i],i+1});
    }
    sort(s.begin(),s.end(),cmp);
    vector<int> ans;
    ans.push_back(s[0][2]);
    int last=s[0][0];
    for(int i=1;i<n;i++){
        if(s[i][1]>last){ans.push_back(s[i][2]);last=s[i][0];}
    }
    return ans;
}