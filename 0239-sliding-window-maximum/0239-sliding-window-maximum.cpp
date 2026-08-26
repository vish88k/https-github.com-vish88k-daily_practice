class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int>ans;
        deque<int>dq;
        for(int i=0;i<k;i++){
            while(dq.size()>0 && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
        dq.push_back(i);
        }
        for(int i=k;i<n;i++){
            ans.push_back(nums[dq.front()]);
         while(dq.size()>0 && dq.front()<i-k+1){
            dq.pop_front();
         }
         while(dq.size()>0 && nums[i]>nums[dq.back()]){
            dq.pop_back();
         }
           dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};