class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                s.insert(nums[i]);
            }
        }
        int i=1;
        while(true){
            if(s.count(k*i)){
                i++;
            }
            else{
                return k*i;
            }
        }
    }
};