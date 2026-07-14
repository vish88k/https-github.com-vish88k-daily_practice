class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int i=0;
        int j=0;
        int m=word1.size();
        int n=word2.size();
         string ans="";
        while(i<m && j<n){
            ans=ans+word1[i];
            i++;
            ans=ans+word2[j];
            j++;   
            }

        while(i<m){
            ans=ans+word1[i];
            i++;
        }
        while(j<n){
        ans=ans+word2[j];
        j++;
        }

return ans;
    }
};