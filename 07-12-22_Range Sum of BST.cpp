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
    void inorder(TreeNode* root , vector<int>&v , int low , int high){
	//base case
	if(root == NULL){
		return;
	}
	
	
	inorder(root->left , v , low , high);
    if(root->val >= low && root->val <= high){
        v.push_back(root->val);
    }
	
	inorder(root->right , v , low , high);	
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>v;
        inorder(root ,v , low , high );

        int sum=0;
        for(auto it:v){
            sum=sum+it;
        }
        return sum;
    }
};
