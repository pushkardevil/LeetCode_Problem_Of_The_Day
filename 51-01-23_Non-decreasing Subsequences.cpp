// LINK-https://leetcode.com/problems/non-decreasing-subsequences/description/

class Solution {
public:
void solve(vector<int> nums ,vector<int>output , int index ,  set<vector<int>> &ans ){
        //base case
        if( index == nums.size()){
            if(output.size() >= 2) ans.insert(output);          
            return; 
        }
        
        
        if(output.size()==0 || (output.back()<=nums[index] ))
        {
            output.push_back(nums[index]);
            solve( nums , output , index+1 , ans);
            output.pop_back();
        }
         solve( nums , output , index+1 , ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
       // sort(nums.begin() , nums.end());
        vector<vector<int>> res;
        set<vector<int>> ans;
        vector<int>output;
        int index=0;
        solve( nums , output , index , ans);

        for(auto it:ans){
            res.push_back(it);
        }
        return res;

    }
};
