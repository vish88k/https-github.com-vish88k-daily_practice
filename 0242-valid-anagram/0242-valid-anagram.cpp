class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        
    unordered_map<int,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(int j=0;j<t.size();j++){
        if( mp.find(t[j])!=mp.end() && mp[t[j]]>0){
            mp[t[j]]--;
        }
        else{
            return false;
        }
    }
    return true;
    }
};