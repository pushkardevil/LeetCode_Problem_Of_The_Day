class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
          int n=gas.size();
          int gSum=0;
          int ccost=0;

          for(auto it:gas) gSum+=it;
          for(auto it:cost) ccost+=it;

          if(gSum < ccost) return -1;
          int i=0;
          int currfuil=0;
          int start=0;

          for(int i=0;i<n;i++){
              currfuil+=(gas[i]-cost[i]);
              if(currfuil < 0){
                  start=i+1;
                  currfuil=0;
              }
          }
          return start;
    }
};
