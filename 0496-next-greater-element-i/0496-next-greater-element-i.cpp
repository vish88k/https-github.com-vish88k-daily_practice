class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>ans(nums1.size());
        unordered_map<int,int>mp;

        for(int i=nums2.size()-1;i>=0;i--){
             while(!st.empty() && nums2[i]>=nums2[st.top()]){
                st.pop();
             }
             if(st.empty()){
             mp[nums2[i]]=-1;
             st.push(i);
             }
             else{
           mp[nums2[i]]=nums2[st.top()];
           st.push(i);
             }
        }
        
        for(int i=0;i<nums1.size();i++){
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};

    