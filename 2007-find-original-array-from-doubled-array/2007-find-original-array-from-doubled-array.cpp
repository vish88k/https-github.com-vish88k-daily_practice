class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
  
        vector<int>ans;
        if(changed.size()%2==1){
            return ans;
        }
        sort(changed.begin(),changed.end());
       unordered_map<int,int>mp;
       for(int i=0;i<changed.size();i++){
        mp[changed[i]]++;
       }

       for(int i=0;i<changed.size();i++){

        if(mp[changed[i]]!=0){
          if(mp[changed[i]*2] >0){
              mp[changed[i]*2]--;
              mp[changed[i]]--;
              ans.push_back(changed[i]);
          }
          else{
            return {};
          }
          }
          else{
              continue;
          }
       }
       
       return ans;
    }
        
};