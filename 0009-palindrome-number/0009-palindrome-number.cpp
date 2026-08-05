class Solution {
public:
    bool isPalindrome(int x) {
     long long  dig=0;
          int y=x;
      if(y<0){
        return false;
      }
      
        while(x>0){
            dig=dig*10+x%10;
            x=x/10;
        }

         if(dig==y){
            return true;
        }
        return false;
    }
};
      