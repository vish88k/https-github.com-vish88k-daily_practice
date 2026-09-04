class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n=nums.size();
     vector<int>suffixmin(n);
   
     int mn=INT_MAX;
     for(int i=n-1;i>=0;i--){
        mn=min(mn,nums[i]);
          suffixmin[i]=mn;
     }
     int currmax=INT_MIN;
     for(int i=0;i<n;i++){
       currmax=max(currmax,nums[i]);
         int ans=currmax-suffixmin[i];
        if( ans<=k){
            return i;
        }
     }
     return -1;
    }
};
    