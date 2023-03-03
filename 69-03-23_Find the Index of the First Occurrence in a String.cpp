class Solution {
public:
int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    auto it =s2.find(s1);
    if (it != s2.size())
        return s2.find(s1);
    return -1;
}
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();

        int res = isSubstring(needle, haystack);

        if(res == -1){
            return -1;
        }
        else{
            return res;
        }
    }
};
