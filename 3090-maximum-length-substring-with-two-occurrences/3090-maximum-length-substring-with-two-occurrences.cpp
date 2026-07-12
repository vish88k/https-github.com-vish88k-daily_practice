class Solution {
public:
    int maximumLengthSubstring(string s){
        int maxi=0;
        int ans=0;
        int j=0;
        unordered_map<int,int>mp;
         for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>2){
                mp[s[j]]--;
                j++;
            }
            ans=i-j+1;
            maxi=max(maxi,ans);

         }
         return maxi;
    }
};
    