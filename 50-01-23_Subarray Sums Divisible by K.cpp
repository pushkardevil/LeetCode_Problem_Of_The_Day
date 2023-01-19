class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int r;
        int cnt=0;

        for(auto &it:nums){
            sum+=it;
            r=sum%k;
            if(r <0) r=r+k;
            cnt+=mp[r];
            mp[r]++;
        }


        return cnt;
    }
};
