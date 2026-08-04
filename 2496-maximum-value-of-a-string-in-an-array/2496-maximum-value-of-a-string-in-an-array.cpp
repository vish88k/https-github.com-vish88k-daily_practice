class Solution {
public:
    int maximumValue(vector<string>& strs) {
    int  maxval=0;
    int size=strs.size();
    for(int i=0;i<size;i++){
        bool  flag=true;
         for(char ch:strs[i]){
            if(!isdigit(ch)){
                flag=false;
            break;
            }

         }
         if(!flag){
            maxval=max(maxval,(int) strs[i].size());
         }
         else{
         maxval=max(maxval,stoi(strs[i]));
         }
    }
    return maxval;
    }
};