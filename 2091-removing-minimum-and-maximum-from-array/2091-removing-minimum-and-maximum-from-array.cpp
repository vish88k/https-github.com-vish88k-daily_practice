class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         int minimum=INT_MAX;
         int maximum=INT_MIN;
         int maxindex;
         int minindex;
         int start=0;
         int end=0;
           for(int i=0;i<nums.size();i++){
            minimum=min(minimum,nums[i]);
            maximum=max(maximum,nums[i]);
           }


            for(int i=0;i<nums.size();i++){
            if(nums[i]==minimum){
                minindex=i;
            }
            if(nums[i]==maximum){
                maxindex=i;
            }
            }
      
        int count1=max(minindex,maxindex)+1;//left
        int count2=nums.size()-min(maxindex,minindex);//right
        int count3=min(maxindex,minindex)+1+nums.size()-max(minindex,maxindex);
     

     int ans=min(count1,min(count2,count3));
    
     return ans;
    }
};