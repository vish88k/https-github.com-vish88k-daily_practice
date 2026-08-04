class Solution {
public:
    int myAtoi(string s) {
         int i=0;
         bool flag=true;
         while(i<s.size() && s[i]==' '){
            i++;
         }
           
        if(i<s.size() && s[i]=='-'){
            flag=false;
            i++;
        }
        else if(i<s.size() && s[i]=='+'){
            i++;
        }
        
       long long digit=0;
     for(int j=i;j<s.size();j++){

            if(!isdigit(s[j])){
            break;
            }
            if (digit > (INT_MAX - (s[j] - '0')) / 10) {
               return flag ? INT_MAX : INT_MIN;
            }
        digit=digit*10 +(s[j]-'0');
     }

      // Overflow
            if (flag && digit > INT_MAX){
                return INT_MAX;
            }

            if (!flag && -digit < INT_MIN){
                return INT_MIN;
            }
        
   if(!flag){
        return -digit;
    }
    else{
     return digit;
    }
    }
};
    