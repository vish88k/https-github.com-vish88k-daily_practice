class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
       for(char i :s){

        if( !st.empty() && i==st.top() ){
            st.pop();
        }
    
        else{
            st.push(i);
        }
       }
       string ans="";
       while(!st.empty()){
        ans=ans+st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
      return ans;
    }
};
      