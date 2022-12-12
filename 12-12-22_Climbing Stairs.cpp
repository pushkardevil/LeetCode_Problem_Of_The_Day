//////////////////////By Recursion//////////////////////////////////////////////////////////



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
