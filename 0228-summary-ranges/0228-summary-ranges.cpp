class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string>ans;
        int n=nums.size();
        if(n==0){
            return ans;
        }
       long long i=0;
        long long s=0;
        while(i<nums.size() && s<nums.size()){
            if(i!=nums.size()-1  &&  nums[i+1]==nums[i]+1){
                i++;
              }
            else{
                if(s!=i){
                ans.push_back( to_string(nums[s]) + "->"+ to_string(nums[i]));
                s=i+1;
                i++;
                }
                else{
                    ans.push_back(to_string(nums[i]));
                    s=i+1;
                    i++;
                }
            }
        }
        return ans;

     }
};
     