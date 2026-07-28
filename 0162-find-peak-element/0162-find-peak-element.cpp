class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
       
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(mid==0){
            if(nums[mid]>nums[mid+1]){
                return mid;
            }
            else{
                i=1;
                continue;
            }
            }
            if(mid==n-1){
                if(nums[mid]>nums[mid-1]){
                    return mid;
                }
                else{
                    j=n-2;
                    continue;
                }
            }

            if(nums[mid]>nums[mid+1] && nums[mid-1]<nums[mid]){
                return mid;
            }

          if(nums[mid]>nums[mid+1]){
            j=mid-1;
          }
          else{
            i=mid+1;
          }

        }
        return 0;
    }
};