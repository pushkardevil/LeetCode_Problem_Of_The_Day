class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int n=words.size();
        for(int i=0;i<n-1;i++){
            string s1=words[i];
            string s2=words[i+1];

            int i1=0;
            int i2=0;

            while(s1[i1] == s2[i2]){
                i1++;
                i2++;
            }

            int l1=order.find(s1[i1]);
            int l2=order.find(s2[i2]);

            if(l1 > l2) return false;
        }
        return true;
    }
};
