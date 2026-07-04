class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()){
            return 0;
        }
        int i=0;
        int j=nums.size()-1;
      while(i<=j){

        while( j>=0 && nums[j]==val){
            j--;
        }
        if(i>j){
            return j+1;//break
        }

        if(nums[i]==val){
            nums[i]=nums[j];
            j--;
            while( j>=0 && nums[j]==val){
                j--;
            }
            if(i>j){
                return j+1;//break
            }
        }
        else{
            i++;
        }
      }
      return j+1;
    }
};

