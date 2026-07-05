class Solution {
public:
     vector<int> prevsmall(vector<int>& heights,int n){
        vector<int>ps(n);

        stack<int>st;
     ps[0]=-1;
      st.push(0);
      for(int i=1;i<n;i++){
          while( !st.empty() && heights[i]<=heights[st.top()]){
            st.pop();
          }
          if(st.empty()){
             ps[i]=-1;
             st.push(i);
          }
          else{
            ps[i]=st.top();
            st.push(i);
          }
      }
      return ps;
     }

 vector<int> nextsmall(vector<int>& heights,int n){
    vector<int>ns(n);
        stack<int>st;
     ns[n-1]=n;
      st.push(n-1);
      for(int i=n-2;i>=0;i--){
          while( !st.empty() && heights[i]<=heights[st.top()]){
            st.pop();
          }
          if(st.empty()){
            ns[i]=n;
             st.push(i);
          }
          else{
            ns[i]=st.top();
            st.push(i);
          }
      }
      return ns;
     }


    int largestRectangleArea(vector<int>& heights) {
        
        int maxarea=0;
        int n=heights.size();
        if(n==0){
            return 0;
        }
        vector<int>ps(n);
        vector<int>ns(n);
            int area=0;
            ps=prevsmall(heights,n);
            ns=nextsmall(heights,n);
        for(int i=0;i<n;i++){
            area=heights[i]*(ns[i]-ps[i]-1);
             maxarea=max(maxarea,area);
        }

return maxarea;
    }
};