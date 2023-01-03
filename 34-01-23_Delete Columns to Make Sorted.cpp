class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt=0;
        int n=strs[0].size();
        int n1=strs.size();
        if(n1 == 0) return cnt;
        for(int i=0;i<n;i++){
            for(int j=0;j<n1-1;j++){
                if(strs[j+1][i] - strs[j][i] < 0){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};
