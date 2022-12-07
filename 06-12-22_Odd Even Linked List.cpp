
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if( head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* fast1=head;
        ListNode*fast2=head->next;
        ListNode* d=head->next;
        

        
        while( fast2 != NULL && fast2->next != NULL ){
            fast1->next=fast1->next->next;
            fast2->next=fast2->next->next;
            fast2=fast2->next;
            fast1=fast1->next;
        }
        
        fast1->next=d;
        
        return head;
    }
};
