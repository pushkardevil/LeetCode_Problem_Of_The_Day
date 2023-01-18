class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n=s.size();
        int ans=0;
        int flips=0;
        int cnt1=0;
        int cnt0=0;

        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                cnt1++;
            }
        }
        cnt0=n-cnt1;
        ans=cnt0;

        for(auto &it:s){
            n--;
            if(it == '1'){
                flips++;
                cnt1--;
            }
            ans=min(ans ,flips + (n-cnt1));
        }

        return ans;
    }
};
