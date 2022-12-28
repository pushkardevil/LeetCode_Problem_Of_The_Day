class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();
        priority_queue<int> pq;
        for(auto it:piles){
            pq.push(it);
        }
        
        while(k != 0){
            int p=pq.top();
            pq.pop();
            pq.push(p- floor(p/2));
            k--;
        }
        int sum=0;

        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            sum=sum+a;
        }

        return sum;
    }
};
