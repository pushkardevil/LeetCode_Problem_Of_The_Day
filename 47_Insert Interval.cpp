class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        
        vector<vector<int>> v;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            if( intervals[i][1] < newInterval[0]){
                v.push_back(intervals[i]);
            }
        }
        
        for(int i=0;i<n;i++){
            if( (intervals[i][0] >= newInterval[0] && intervals[i][0] <= newInterval[1]) 
               || (intervals[i][0] <= newInterval[0] && intervals[i][1] >= newInterval[1]) 
               || (intervals[i][1] >= newInterval[0] && intervals[i][1] <= newInterval[1]) ){
                
                newInterval[0]=min( intervals[i][0] , newInterval[0]);
                newInterval[1]=max( intervals[i][1] , newInterval[1]);
                
                
            }
        }
        
        v.push_back(newInterval);
        for(int i=0;i<n;i++){
            if( intervals[i][0] > newInterval[1]){
                v.push_back(intervals[i]);
            }
        }
        
        
        return v;
    }
};
