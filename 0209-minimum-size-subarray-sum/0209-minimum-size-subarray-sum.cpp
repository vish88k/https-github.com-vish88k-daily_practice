class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        int count=INT_MAX;
        while(l<nums.size()){
           while( r<nums.size() && sum<target){
              sum=sum+nums[r];
               r++;
               if(r>nums.size()){
                r--;
               }
           }
           if(sum>=target){
              count=min(count,r-l);
           }
             sum=sum-nums[l];
            l++;
           
        }
        if(count==INT_MAX){
            return 0;
        }
    return count;
    }
};