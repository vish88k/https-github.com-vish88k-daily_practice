class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=2*nums.size();

        vector<int>ans;
        int j=0;
        for(int i=0;i<n;i++){

            ans.push_back(nums[j++]);
             if(j==n/2){
                j=0;
                continue;

            }
        }
    return ans;
    }
};