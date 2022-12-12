//////////////////////By Recursion/////////////Time Limit Exceed/////////////////////////////////////////////
class Solution {
public:
    int climbStairs(int long long n) {
        
        
        if(n < 0)
        return 0;
    
    if(n == 0)
        return 1;
    
    //R.C
    int ans = climbStairs(n-1) + climbStairs(n-2);
        
        return ans;
    }
};


////////////////////////////////2nd Method////////////////////////////////////////////////////

class Solution {
public:
    int climbStairs(int n) {
        
        int pre=1;
        int current=1;
        int temporary=0;
        
        for(int i=1;i<n;i++){
            temporary=current;
            current=current+pre;
            pre=temporary;
        }
        
        return current;
    }
};
