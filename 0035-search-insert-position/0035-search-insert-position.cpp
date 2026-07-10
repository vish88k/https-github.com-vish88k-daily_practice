class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        
        int low=0;
        if(n==0){
           return -1;
        }
        int high=n-1;
        if(nums[n-1]<target){
            return  n;
        }
        if(nums[0]>target){
            return 0;
        }
        
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
               
                low=mid+1;
            }
             else if(nums[mid]>target){
            
          high=mid-1;
             }
            else{
                return mid;
            }
        }
        return low;
    }
};