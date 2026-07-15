class Solution {
public:
    bool judgeSquareSum(int c) {
       
      long long i=0;
      long long lastdeg=0;
       while(i*i<=c){
            lastdeg=i;
            i++;
        }

        i=0;
        long long j=lastdeg;
        while(i<=j){
           long long cal=i*i+j*j;
            if(cal<c){
                i++;
            }
            else if(cal>c){
                j--;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
