class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int calulation=0;
        bool flag=true;
        for(int i: nums){
            calulation=calulation^i;
         if(i!=0){
            flag=false;
         }
        }
        if(calulation!=0){
            return n;
        }
        else{
            if(flag){
                return 0;
            }
        }
     return n-1;
    }
};

       