class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximumvalue=0.;

         for(string s:sentences){
            int count=1;

            for(char ch:s){
                if(ch==' '){
                    count++;

                }
            }
            maximumvalue=max(maximumvalue,count);
         }
        return maximumvalue;
    }
};
