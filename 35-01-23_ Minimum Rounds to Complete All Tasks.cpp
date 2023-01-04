class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        int n=tasks.size();
        for(int i=0;i<n;i++){
            mp[tasks[i]]++;
        }
        int cnt=0;

        for(auto it:mp){
            int t=it.second;
            if(t == 1) return -1;
            else{
                if(t%3 == 0){
                    cnt=cnt+ t/3;
                }
                else if(t%3 == 1){
                    cnt=cnt+t/3;
                    cnt++;
                }
                else if(t%3 == 2){
                    cnt=cnt+t/3;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
