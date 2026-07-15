class Solution {
public:
    bool rotateString(string s, string goal) {
      if(s.size()!=goal.size()){
        return false;
      }
      if(s.size()==0 && goal.size()==0){
        return true;
      }
        int startindex;
       char digit=goal[0];
       for(int i=0;i<s.size();i++){
         if(s[i]==digit){
           startindex=i;
          
          int start=startindex;
          for(int j=0;j<s.size();j++){
            if(s[start]==goal[j]){
                start++;
                if(start==s.size()){
                   start=0;
                }  
               
            }
            else{
                break;
            }

            if(j==s.size()-1){
                return true;
            }
          }
       }
       }
       return false;
    }
};