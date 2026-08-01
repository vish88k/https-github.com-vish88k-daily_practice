class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=0;
        int y=n;
        vector<int>ans(2*n);
    for(int i=0;i<2*n; i+=2){
         ans[i]=nums[x];
         x++;
         ans[i+1]=nums[y];
         y++;
        }
        return ans;

        }
};