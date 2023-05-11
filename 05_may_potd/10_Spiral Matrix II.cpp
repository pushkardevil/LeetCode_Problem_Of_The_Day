class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n , vector<int>(n,0));

        int left=0,right=n-1;
        int top=0,bottom=n-1;
        int j=1;
        while(top<=bottom && left <= right){
            for(int i=left;i<=right;i++){
                ans[top][i]=j;
                j++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=j;
                j++;
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=j;
                    j++;
                }
            }
            bottom--;

            if(left<= bottom){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=j;
                    j++;
                }
            }

            left++;
        }
        return ans;
    }
};
