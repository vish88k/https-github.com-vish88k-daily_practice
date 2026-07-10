class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9){
            digits[n-1]=digits[n-1]+1;
            return digits;
        }
        else{
           int i=1;

            while (digits[n-i]==9){
            digits[n-i]=0;
            i++;
            
            if(i==n+1){
                digits.insert(digits.begin(), 1);
                return digits;
         
            }
            }
            digits[n-i]=digits[n-i]+1;
        
            return digits;
        }
    }
};