class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
      int i=1;
      int sum=nums[0];
    while(i<n && nums[i]==nums[i-1]+1){
        sum=sum+nums[i];
        i++;
    }
    unordered_map<int,int>mp;
    for(int j=0;j<n;j++){
    mp[nums[j]]=1;
    i++;
    }
    while(mp.find(sum)!=mp.end()){
      sum++;
    }
    return sum;
    }
};
    