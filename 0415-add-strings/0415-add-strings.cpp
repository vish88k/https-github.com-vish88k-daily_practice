class Solution {
public:
    string addStrings(string num1, string num2) {
     string ans;
         int n=num1.size();
         int m=num2.size();
         int i=n-1;
         int j=m-1;
         int count=0;
         int carry=0;
         while(i>=0 &&j>=0){
            count=num1[i]-'0' +num2[j]-'0'+carry;
            if(count>9){
                carry=count/10;
            }
            else{
                carry=0;
            }
            ans.push_back(count%10+'0');
            i--;
            j--;
            }
            while(i>=0){
             count=num1[i]-'0'+carry;
             if(count>9){
                carry=count/10;
             }
             else{
                carry=0;
             }

                ans.push_back(count%10+'0');
                i--;
            }


            while(j>=0){
             count=num2[j]-'0'+carry;
             if(count>9){
                carry=count/10;
             }
             else{
                carry=0;
             }
                ans.push_back(count%10+'0');
                j--;
            }

            if(carry!=0){
                ans.push_back(carry+'0');
            }
              reverse(ans.begin(),ans.end());
              string result(ans.begin(),ans.end());
            return result;
    }
};
            
