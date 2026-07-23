class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<int,int>mp;
        for(int i=0;i<s.size();i++){
             mp[s[i]]++;
        }
        char ch;
        for(int j=0;j<t.size();j++){
          if(mp.find(t[j])!=mp.end()  && mp[t[j]]>0){
            mp[t[j]]--;
          }
          else{
          ch=t[j];
          break;
        }
        }
        return ch;
    }    

};