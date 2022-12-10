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
    long long int solve( TreeNode* root){
        if( root == NULL) return 0;

        long long sum=solve(root->left) + solve(root->right) + root->val;
        return sum;
    }

    int func( TreeNode* root , int totalsum , long long int& ans){
        if( root == NULL) return 0;

        long long int subtree=0;

        subtree+=func(root->left , totalsum , ans);
        subtree+=func(root->right , totalsum , ans);
        subtree+=root->val;

        if(subtree*(totalsum-subtree) > ans){
            ans=subtree*(totalsum-subtree);
        }
        return subtree;


    }
    int maxProduct(TreeNode* root) {
        long long int totalsum=solve(root);
        long long int ans=0;
        func(root , totalsum  , ans);
        return ans%1000000007;
    }
};
