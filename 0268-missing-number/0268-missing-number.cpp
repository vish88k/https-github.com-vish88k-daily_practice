class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int actualsum=0;
        int value;
         for(int i=0;i<nums.size();i++){
          sum=sum+nums[i];
          actualsum=actualsum+i+1;
         }
value=actualsum-sum;
return value;
    }
};