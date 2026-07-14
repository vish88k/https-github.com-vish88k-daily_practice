class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxlength=0;
        int  k=0;
        int j=0;
       int  length=0;
        if(n==1){
            return s;
        }
        
        for(int i=0;i<n;i++){
          
             j=i;
             k=i+1;
               while(j>=0 && k<=n-1){
                     if(s[j]==s[k]){
                         length=k-j+1;
                   if(length > maxlength) {
                         maxlength = length;
                     start = j;
                    }
                    k++;
                    j--;
                    }
                    else{
                        break;
                    }
               }
     

               j=i;
               k=i;
                 while(j>=0 && k<=n-1){
                     if(s[j]==s[k]){
                         length=k-j+1;
                   if (length > maxlength) {
                         maxlength = length;
                     start = j;
                    }
                    k++;
                    j--;
                    }
                    else{
                        break;
                    }
               }
        }
        return s.substr(start,maxlength);
        
    }
};