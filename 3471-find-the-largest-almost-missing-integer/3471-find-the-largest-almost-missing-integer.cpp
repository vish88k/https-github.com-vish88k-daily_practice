class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
  unordered_map<int,int>mp;
  int ans=-1; 
  for(int i=0;i<nums.size();i++){
     mp[nums[i]]++;
  }
    if(k==1){
        for(int i:nums){
            if(mp[i]==1){
            ans=max(ans,i);
            }
        }
        return ans;
    }
    if(k==nums.size()){
        for(int i:nums){
            ans=max(ans,i);
        }
        return ans;
    }
    if(mp[nums[0]]==1 && mp[nums[nums.size()-1]]==1){
        return max(nums[0],nums[nums.size()-1]);
    }
    else if(mp[nums[0]]==1){
        ans=nums[0];
    }
    else if(mp[nums[nums.size()-1]]==1){
        ans=nums[nums.size()-1];

    }
return ans;

  }
 
};
   