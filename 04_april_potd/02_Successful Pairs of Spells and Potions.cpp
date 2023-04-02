class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
              int n=spells.size();
              int m=potions.size();
              vector<int>v(n);
              sort(potions.begin(), potions.end());

              for(int i=0;i<n;i++){
                  int s=0;
                  int e=m-1;
                  int ans=-1;
                  while(s<=e){
                      int mid=s+(e-s)/2;
                      if((long long)spells[i]*potions[mid] >= success){
                           ans=mid;
                           e=mid-1;
                      }
                      else{
                          s=mid+1;
                      }
                  }
                  if(ans != -1) v[i]=m-ans;
              }


              return v;
    }
};
