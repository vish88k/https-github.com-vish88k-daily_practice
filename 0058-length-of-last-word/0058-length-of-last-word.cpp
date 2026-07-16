class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        string ans="";
        int i=n-1;
        if(n==1 ||n==0){
            return n;
        }
       while(s[i]==' '){
        i--;
        if(i==-1){
            return 0;
        }
        
       }
       while(s[i]!=' '){
        ans=ans+s[i];
        i--;
        if(i==-1){
            return ans.size();
        }
       }

       return ans.size();
    }
};