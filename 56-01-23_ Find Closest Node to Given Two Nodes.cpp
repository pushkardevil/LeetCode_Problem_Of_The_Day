//LINK :  https://leetcode.com/problems/find-closest-node-to-given-two-nodes/

class Solution {
public:
void solve(int i , int distance , vector<int>&edges , vector<int>&v){
    if(i != -1 && v[i] == -1){
        v[i]=distance;
        solve(edges[i] , distance+1 , edges , v);
    }
}
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int ans=-1;
        int minDistance=INT_MAX;
        int n=edges.size();
        vector<int>v1(n , -1) , v2(n , -1);

        solve(node1 , 0 , edges , v1);
        solve(node2 , 0 , edges , v2);

        for(int i=0;i<n;i++){
            if( min(v1[i] , v2[i]) >= 0  && max(v1[i] , v2[i]) < minDistance){
                minDistance=max(v1[i] , v2[i]);
                ans=i;
            }
        }
        return ans;
    }
};
