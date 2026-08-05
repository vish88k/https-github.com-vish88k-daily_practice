class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="";
        string w2="";
        for(string s:word1){
            for( char ch:s){
                w1=w1+ch;
            }
        }
         for(string s:word2){
            for( char ch:s){
                w2=w2+ch;
            }
         }
         if(w1==w2){
            return true;
         }
         else{
            return false;
         }
    }
};
       