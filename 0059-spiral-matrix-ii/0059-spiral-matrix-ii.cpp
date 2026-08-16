class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        int j=1;
        int srow=0;
        int scol=0;
        int erow=n-1;
        int ecol=n-1;
        while(srow<=erow && scol<=ecol){

        for(int i=scol;i<=ecol;i++){
            matrix[srow][i]=j++;
        }
        for(int i=srow+1;i<=erow;i++){
            matrix[i][ecol]=j++;
        }
        // bottom
    for(int i=ecol-1;i>=scol;i--){
        if(srow==erow){
            break;
        }
        
     matrix[erow][i]=j++;
    }
    //left
    for(int i=erow-1;i>=srow+1;i--){
        if(scol==ecol){
            break;
        } 
        matrix[i][scol]=j++;
        
    }
        srow++;
        ecol--;
        erow--;
        scol++;
        }
        return matrix;
    }

};