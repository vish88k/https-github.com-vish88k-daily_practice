class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {  
        unordered_map<int,int>mp;
       int n=nums.size();
       int l=0;
       int r=0;
       int count=0; 
       int maxcount=0;

       while(r<n){

         if(mp[nums[r]]<k){
            mp[nums[r]]++;
            r++;
         }
         else{
            mp[nums[l]]--;
            l++;
         }
         count=r-l;
         maxcount=max(maxcount,count);
       }
       return maxcount;
    }
};
        
    