class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>color(n+1 , 0);
        vector<int>adj[n+1];

        for(auto it:dislikes){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        for(int i=1;i<=n;i++){
            if(color[i] == 0){
                queue<int>q;
                q.push(i);
                color[i]=1;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(auto it:adj[node]){
                        if( color[node] == color[it]){
                            return false;
                        }
                        if(color[it] == 0){
                            color[it]=-color[node];
                            q.push(it);
                        }
                    }
                }
            }
        }
        return true;



    }
};
