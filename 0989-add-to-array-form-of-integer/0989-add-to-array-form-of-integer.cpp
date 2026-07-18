class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k){
        if(k==0){return num;}
        vector<int>ans;
        vector<int>s;
        while(k!=0){
        s.push_back(k%10);
        k=k/10;
    }
       reverse(s.begin(),s.end());

  int n=num.size();
  int m=s.size();
  int i=n-1;
  int j=m-1;
  int carry=0;
  int count=0;
  while(i>=0 && j>=0){
    count=num[i]+s[j]+carry;
    if(count>9){
        carry=count/10;
    }
    else{
        carry=0;
    }
    ans.push_back(count%10);
    i--;
    j--;
  }

           while(i>=0){
             count=num[i]+carry;
             if(count>9){
                carry=count/10;
             }
             else{
                carry=0;
             }

                ans.push_back(count%10);
                i--;
            }


            while(j>=0){
             count=s[j]+carry;
             if(count>9){
                carry=count/10;
             }
             else{
                carry=0;
             }
                ans.push_back(count%10);
                j--;
            }
               if(carry!=0){
                ans.push_back(carry);
            }

            reverse(ans.begin(),ans.end());
            return ans;

    }
};