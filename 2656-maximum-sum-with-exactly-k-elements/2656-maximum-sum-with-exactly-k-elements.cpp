class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
          maxi=max(maxi,nums[i]);
        }

        sum=maxi;
        int dig=sum;
        int i=0;
          while(i<k-1){
            dig++;
          sum=sum+dig;
          i++;
          }
          return sum;
    }
};