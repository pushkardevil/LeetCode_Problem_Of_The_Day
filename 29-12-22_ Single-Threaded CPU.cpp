#include<bits/stdc++.h>
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int>ans;
        int n=tasks.size();
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;

        for(int i=0;i<n;i++){
            tasks[i].push_back(i);
        }

        sort(tasks.begin() , tasks.end());
        long time=0;
        int i=0;
        while(i<n || pq.size()){
            if(pq.empty() ){
                time =max(time, (long)tasks[i][0]);
            }

            while(i < n && time >= tasks[i][0]){
                pq.push({tasks[i][1] , tasks[i][2]});
                i++;
            }

            pair<long,long> s= pq.top();
            pq.pop();
            time+=s.first;
            ans.push_back(s.second);

        }
        return ans;

    }
};
