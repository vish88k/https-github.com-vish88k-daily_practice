class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0){
            return true;
        }
        
       int i=0;
       int j=0;
       while(i<s.length() && j<t.length() ){
        if(s[i]==t[j]){
            j++;
            i++;
        }
        else{
            j++;
           
        }
       }
       if(i==s.length()){
        return true;
       }
       else{
        return false;
       }
    }
};