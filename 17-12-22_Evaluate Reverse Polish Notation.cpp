class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="*" and tokens[i]!="+" and tokens[i]!="/"  and tokens[i]!="-"){
                stk.push(stoi(tokens[i]));
            }
            else{
                long long int a=stk.top();
                stk.pop();
                long long int b=stk.top();
                stk.pop();
                
                long long int ans;
                if(tokens[i]=="*")
                    ans=a*b;
                else if(tokens[i]=="+")
                    ans=a+b;
                else if(tokens[i]=="/")
                    ans=b/a;
                else 
                    ans=b-a;
                stk.push(ans);
            }
        }
        return stk.top();
        
    }
};
