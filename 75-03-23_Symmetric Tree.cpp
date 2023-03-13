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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base case
        if( p == NULL && q==NULL){
            return true;
        }
        if( p == NULL && q!=NULL){
            return false;
        }
        if( p != NULL && q==NULL){
            return false;
        }
        
        bool left=isSameTree(p->left , q->right);
        bool right=isSameTree(p->right , q->left);
        bool value= p->val == q->val;
        
        if( left  && right && value){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        //base case
        
        TreeNode* l=root;
        TreeNode* r=root;
        
        
        return isSameTree( l , r);
        
    
    }
};
