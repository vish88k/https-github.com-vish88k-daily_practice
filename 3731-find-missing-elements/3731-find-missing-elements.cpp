class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
         vector<int>ans;
         int n=nums.size();
         int maxi=INT_MIN;
         int mini=INT_MAX;
         for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
         }
        vector<bool>temp(101,true);
    for(int i=0;i<n;i++){
            temp[nums[i]]=false;
    }
    for(int i=mini; i<=maxi;i++){
        if(temp[i]){
            ans.push_back(i);
        }
    }
    return ans;
    }
};