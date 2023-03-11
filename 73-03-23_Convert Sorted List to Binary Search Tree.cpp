
class Solution {
public:
    TreeNode* create(  vector<int> v , int s , int e){
        if( s == e){
            return ( new TreeNode(v[s]) );
        }
        
        if( s > e){
            return NULL;
        }
        int mid= s+(e-s)/2;
        TreeNode* ptr=new TreeNode(v[mid]);
        ptr->left=create( v , s , mid-1);
        ptr->right=create( v , mid+1 , e);
        return ptr;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        while( head != NULL){
            v.push_back(head->val);
            head=head->next;
        }
        
        int n=v.size();
        int s=0;
        int e=n-1;
        return create( v , s , e);
    }
};
