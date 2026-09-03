class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int smallest_even=INT_MAX;
       int smallestodd=INT_MAX;
       int n=nums1.size();
       for(int i=0;i<n;i++){
        if(nums1[i]%2!=0){
            smallestodd=min(smallestodd,nums1[i]);
        }
        else{
            smallest_even=min(smallest_even,nums1[i]);
        }
       }
       int ans;
       if(smallest_even!=INT_MAX && smallestodd!=INT_MAX){
         ans=smallest_even-smallestodd;
       }
       else{
        return true;
       }
      return ans>=1;
    }
};