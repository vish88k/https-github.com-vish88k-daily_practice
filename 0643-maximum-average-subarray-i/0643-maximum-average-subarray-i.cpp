class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double l=0;
        double r=0;
        double sum=0;
      for(r=0;r<k;r++){
          sum=sum+nums[r];
      }
      double avg=sum/k;
      double maxi=INT_MIN;
    maxi=max(maxi,avg);
    while(r<nums.size()){
        sum=sum-nums[l];
         l++;
       sum=sum+nums[r];
       r++;
       avg=sum/k;
       maxi=max(maxi,avg);
    }
    return maxi;
    }
};
   