class Solution {
public: 


vector<int> leftmax(vector<int>& height,int n){
    vector<int>lmax(n);
    lmax[0]=0;
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],height[i-1]);
    }
    return lmax;
}
vector<int> rightmax(vector<int>& height,int n){
    vector<int>rmax(n);
    rmax[n-1]=0;
    for(int i=n-2;i>=0;i--){ 
         rmax[i]=max(rmax[i+1],height[i+1]);
    }
    return rmax;
}

    int trap(vector<int>& height) {
        
        int n=height.size();
        if(n==0) return  0;
        vector<int>lmax=leftmax(height ,n);
        vector<int>rmax=rightmax(height,n);
        int area=0;
        for(int i=0;i<n;i++){
            int mini=min(lmax[i],rmax[i]);
            area=area+max(0,(mini-height[i]));
        }
        return area;
    }
};
      