class Solution {
public:
    int longestConsecutive(vector<int>& nums) {    
       int n=nums.size();
       if(n==0 || n==1) return n;

       unordered_set<int>s(nums.begin(),nums.end());
       int count=0;
       int maxcount=0;
       for(int i:s){
        if(s.find(i-1)==s.end()){
            int value=i;
            count=1;
            while(s.count(value+1)){
                count++;
              value++;
            }
        }
        maxcount=max(maxcount,count);
       }
       return maxcount;
    }
};
       