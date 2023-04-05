class Solution {
public:
    int partitionString(string s) {
        int n =s.size();
        int cnt=1;
        set<char>set;
        for(auto it:s){
            if(set.find(it) != set.end()){
                set.clear();
                cnt++;
            }
            set.insert(it);
        }
        return cnt;
    }
};
