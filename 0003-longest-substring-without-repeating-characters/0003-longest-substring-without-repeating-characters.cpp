class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mc=0;
        int L=0;
        unordered_map<char,int>mp;
        for(int R=0;R<s.size();R++){
            if(mp.find(s[R])!=mp.end()){
                if(mp[s[R]]>=L){

                  L=mp[s[R]]+1;
                }
              
            
                mp[s[R]]=R;//update
            }
            else{
                mp[s[R]]=R;
               
            }
        mc=max(mc,R-L+1);
        }
         return mc;
    }
    
};