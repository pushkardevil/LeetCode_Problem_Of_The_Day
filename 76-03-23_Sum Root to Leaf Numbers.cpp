/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum=0;
    void solve(TreeNode* root,string str){
        if(root == NULL){
            return;
        }
        
        
        if( root->left == NULL && root->right == NULL){
            str+=to_string(root->val);
                    
            int temp=stoi(str);
            sum+=temp;
            return;
        }
        
        str+=to_string(root->val);
        solve(root->left , str);
        solve(root->right , str);
        
    }
    int sumNumbers(TreeNode* root) {
        if( root == NULL){
            return 0;
        }
        string str;
        solve(root  , str);
        return sum;
    }
};
