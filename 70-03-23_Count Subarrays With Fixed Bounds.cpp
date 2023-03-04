class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
        long long cnt=0;
        
        int start=0,minStart=0,maxStart=0;
        bool minf=false , maxf=false;

        for(int i=0;i<n;i++){
            int num=nums[i];
            if(num < minK || num > maxK){
                minf=false;
                maxf=false;
                start=i+1;
            }

            if(num == minK){
                minf=true;
                minStart=i;
            }
            if(num == maxK){
                maxf=true;
                maxStart=i;
            }

            if(minf && maxf){
                cnt+=min(minStart , maxStart)-start+1;
            }
        }
        return cnt;
    }
};
