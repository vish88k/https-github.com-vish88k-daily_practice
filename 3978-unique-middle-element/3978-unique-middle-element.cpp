class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=nums[n/2];
        int i=0;
        int j=n-1;
        while(i<j){
            if(nums[i]==mid || nums[j]==mid){
                return false;
            }
            else{
             i++;
             j--;
            }
        }
        return  true;
    }
};