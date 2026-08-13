class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int  maxi=nums[0];
     int mini=nums[0];
     int ans=nums[0];
     for(int i=1;i<nums.size();i++){
        int old_maxi=maxi;
        int old_mini=mini;
       maxi=max({nums[i],old_maxi*nums[i],old_mini*nums[i]});
       mini=min({nums[i],old_maxi*nums[i],old_mini*nums[i]});
       ans=max(ans,maxi);
    }
     return ans;

    }
};