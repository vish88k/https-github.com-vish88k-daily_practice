class Solution {
public:
    bool checkDivisibility(int n) {
        int val=n;
        int sum=0;
        int product=1;

        while(n>0){
            int digit=n%10;
            sum=sum+digit;
            product=product*digit;
            n=n/10;
        }
         int addition=sum+product;
         return val % addition==0;
    }
};