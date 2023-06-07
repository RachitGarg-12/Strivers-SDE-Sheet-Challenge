#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){continue;}
            int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==K){
				  ans.push_back({nums[i],nums[j],nums[k]});
                  while(j<k && nums[j]==nums[j+1]){j++;}  
                  while(j<k && nums[k]==nums[k-1]){k--;}
                   j++;k--;
				}
                else if(sum>K){k--;}
                else{j++;}
            }
        }
        return ans;	
}