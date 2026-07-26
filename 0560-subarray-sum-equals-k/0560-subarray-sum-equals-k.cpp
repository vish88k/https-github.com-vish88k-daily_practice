class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ps(n);
        int count=0;

        ps[0]=nums[0]; 
            for(int i=1 ;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
            }
            unordered_map<int,int>mp;
            for(int j=0;j<n;j++){
                 if(ps[j]==k){
                    count++;
                 }
                int value=ps[j]-k;
                if(mp.find(value)!=mp.end()){
                 count=count+mp[value];
                }
                mp[ps[j]]++;
            }
            return count;
    }
};