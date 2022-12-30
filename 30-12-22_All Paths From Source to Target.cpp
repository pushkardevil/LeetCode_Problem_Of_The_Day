class Solution {
public:
void dfs(int node , int target , vector<vector<int>>&graph , vector<vector<int>>&ans , vector<int>&path){
    path.push_back(node);
    if(node == target){
        ans.push_back(path);
    }
    else{
        for(auto it:graph[node]){
           dfs(it , target , graph , ans , path);
       }

    }
    

    path.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>ans;
        vector<int>path;

        dfs(0 , n-1 , graph , ans , path);


        return ans;
    }
};
