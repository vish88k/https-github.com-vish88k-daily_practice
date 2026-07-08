class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums){
        stack<int>st;
        vector<int>ans(nums.size());
        int n=nums.size();
        int j=n-1;
        for(int i=2*n-1;i>=0;i--){
            if(i>n-1){
                
                 while (!st.empty() && nums[j] >= st.top()) {
                    st.pop();
                }
               st.push(nums[j]);
             j--;
              continue;
            }
              while(!st.empty()&& nums[i]>=st.top()){
             st.pop();
              }
              if(st.empty()){
                ans[i]=-1;
                st.push(nums[i]);
              }
              else{
                ans[i]=st.top();
                st.push(nums[i]);
              }
        } return ans;
    }
};