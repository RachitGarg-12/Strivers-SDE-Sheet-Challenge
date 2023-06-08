int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int cur=1,ans=1;
    int i=1,j=0;
    while(i<n){
        if(at[i]>dt[j]){j++;cur--;}
        else{cur++;i++;}
        ans=max(ans,cur);
    }
    return ans;
}