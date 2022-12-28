class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=rocks.size();
        int cnt=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(capacity[i] - rocks[i]);
        }
        sort(v.begin(), v.end()); 

        for(auto it:v){
            if(it == 0){
                cnt++;
            }
            else if(additionalRocks-it >= 0){
                cnt++;
                additionalRocks=additionalRocks-it;
            }
        }

        return cnt;



    }
};
