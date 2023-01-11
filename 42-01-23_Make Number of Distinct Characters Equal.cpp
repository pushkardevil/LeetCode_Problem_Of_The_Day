class Solution {
public:
    bool isItPossible(string word1, string word2) {
      
        map<char , int>m1 , m2;
        for(auto it:word1) m1[it]++;
        for(auto it:word2) m2[it]++;

        for(char ch1='a';ch1<='z';ch1++){
            for(char ch2='a';ch2<='z';ch2++){
                if(m1[ch1]>0 && m2[ch2]>0){
                    m1[ch1]--;
                    m2[ch2]--;
                    m1[ch2]++;
                    m2[ch1]++;
                

                    int unique1=0;
                    int unique2=0;
                    for(char ch='a';ch<='z';ch++){
                        if(m1[ch] > 0) unique1++;
                        if(m2[ch] > 0) unique2++;

                    }

                    if(unique1 == unique2) return true;

                    m1[ch2]--;
                    m2[ch1]--;
                    m1[ch1]++;
                    m2[ch2]++;
            }
        }

    }   
        return false;




    }
};
