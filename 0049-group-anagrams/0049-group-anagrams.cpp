class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>copy(strs);
        vector<string>sortgroup;
        vector<vector<string>>group;
        unordered_map<string,vector<int>>mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(i);
        } 
         for(auto &it:mp){
           vector<string>ans;
            for(int index:it.second){
                ans.push_back(copy[index]);
            }
            group.push_back(ans);
        }
    
    return group;
   }
};