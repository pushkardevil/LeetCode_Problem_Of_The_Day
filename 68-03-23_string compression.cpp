class Solution {
public:
    int compress(vector<char>& nums) {
        int n=nums.size();
        string s="";
        int i=0;
        while( i < n){
            int j=i+1;
            char ch=nums[i];
            

            while(j<n && nums[i] == nums[j]){
                j++;   
            }

            int cnt=j-i;


            if(cnt == 1){
                s+=ch;
            }
            else{
                s+=ch;
                string count=to_string(cnt);
                for(char ch: count){
                    s+=ch;
                }
            }
            i=j;
            
        }

        for(int i=0; i<s.length(); i++) nums[i] = s[i];
        return s.size();
    }
};
