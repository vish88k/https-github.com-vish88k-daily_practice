class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0;
        int totalcost=0;
      int currgas=0;
      int start=0;
    for(int i=0;i<gas.size();i++){
        totalgas=totalgas+gas[i];
        totalcost=totalcost+cost[i];
        currgas=currgas+gas[i]-cost[i];
        if(currgas<0){
            currgas=0;
            start=i+1;
        }
    }
    return totalgas>=totalcost?start:-1;
    }
};