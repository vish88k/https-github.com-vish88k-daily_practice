class Solution {
public:
    int smallestNumber(int n, int t) {
        
        while(n<=100){
            int product=1;
            int x=n;
           while(x>0){ 
             product=product*(x%10);
             x=x/10;
           }
           if(product%t==0){
         break;
           }
           else{
            n++;
        }
        }
        return n;
    }

};
