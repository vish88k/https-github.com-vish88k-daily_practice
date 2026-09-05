class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>suffix(n);
        int mini=INT_MAX;
         for(int i=n-1;i>=0;i--){
           mini=min(mini,nums[i]);
         suffix[i]=mini;
         }

        int currmax=0;
        for(int i=0; i<n;i++){
            currmax=max(currmax,nums[i]);
            int ans=currmax-suffix[i];
            if(ans<=k){ 
                return i;
            }
        }
        return -1;
    }
};