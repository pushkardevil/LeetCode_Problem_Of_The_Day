
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
void inorder(TreeNode* root1 , vector<int>&v1){
    if( root1 == NULL) return;

    inorder(root1->left, v1);
    if(root1->left == NULL && root1->right == NULL){
        v1.push_back(root1->val);
    }
    inorder(root1->right, v1);
}

void inorde(TreeNode* root2 , vector<int>&v2){
    if( root2 == NULL) return;

    inorde(root2->left, v2);
    if(root2->left == NULL && root2->right == NULL){
        v2.push_back(root2->val);
    }
    inorde(root2->right, v2);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;

        inorder(root1 , v1);
        inorde(root2 , v2);

        if( v1.size() != v2.size()) return false;

        for(int i=0;i<v1.size();i++){
            if(v1[i] != v2[i]) return false;
        }

        return true;

    }
};
