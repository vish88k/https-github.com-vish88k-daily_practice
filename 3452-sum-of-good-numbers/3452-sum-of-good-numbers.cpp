class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i-k>=0 && i+k<n){
                if(nums[i]>nums[i-k] && nums[i]>nums[i+k]){
                    sum=sum+nums[i];
                }
            }
            else if(i-k<0){
                if(nums[i]>nums[i+k]){
                    sum=sum+nums[i];
                }
            }
            else{
                if(nums[i]>nums[i-k]){
                    sum=sum+nums[i];
                }
            }
        }
    return sum;
    }
};