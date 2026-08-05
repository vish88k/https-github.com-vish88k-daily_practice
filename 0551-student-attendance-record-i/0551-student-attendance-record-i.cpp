class Solution {
public:
    bool checkRecord(string s) {
        int countabs=0;
        int countlate=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                countlate=0;
                countabs=countabs+1;
                if(countabs>=2){
                    return false;
                 }    
            
            }
            else if(s[i]=='L'){
                countlate=countlate+1;
                if(countlate>=3){
                    return false;
                }
            }
            else{
                countlate=0;
            }
        }
        return true;
    }
};