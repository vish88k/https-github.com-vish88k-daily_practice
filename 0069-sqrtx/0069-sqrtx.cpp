class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int ans=1;
         int i=2;
         int j=x/2;
         while(i<=j){
            long long mid=(i+j)/2;
       
       if(mid*mid==x){
        return mid;
        }
        else if(mid*mid>x){
            j=mid-1;
      }
      else{
        ans=mid;
        i=mid+1;
        }

      }
  return ans;
 }

};