/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;

        map<ListNode* , bool>mp;
        ListNode *temp=head;

        while(temp != NULL){
            if(mp[temp] == true) return temp;
            mp[temp]=true;
            temp=temp->next;
        }
        return NULL;
    }
};
