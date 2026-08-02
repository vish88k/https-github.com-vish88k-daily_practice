class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

      int n=nums2.size();


       unordered_set<int>s(nums1.begin(),nums1.end());
       vector<int>ans;
       for(int i=0; i<n;i++){
         if(s.count(nums2[i])){
            ans.push_back(nums2[i]);
            s.erase(nums2[i]);
         }
       }
       return ans;
    }
};
