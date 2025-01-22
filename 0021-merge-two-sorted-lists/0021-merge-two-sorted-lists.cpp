/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        if(head1->val<head2->val){
            head1->next = mergeTwoLists(head1->next,head2);
            return head1;
        }
        else{
            head2->next = mergeTwoLists(head1,head2->next);
            return head2;
        }
        // ListNode* fhead = NULL;
        // ListNode* ftail = NULL;
        // if(head1->val>head2->val){
        //     fhead = head2;
        //     ftail = head2;
        //     head2 = head2->next;
        // }
        // else{
        //     fhead = head1;
        //     ftail = head1;
        //     head1 = head1->next;
        // }
        // while(head1!=NULL&&head2!=NULL){
        //     if(head1->val<head2->val){
        //         ftail->next = head1;
        //         head1=head1->next;
        //         ftail=ftail->next;
        //     }
        //     else{
        //         ftail->next = head2;
        //         head2=head2->next;
        //         ftail=ftail->next;
        //     }
        // }
        // if(head1!=NULL){
        //     ftail->next = head1;
        //     head1=head1->next;
        //     ftail=ftail->next;
        // }
        // else{
        //     ftail->next = head2;
        //     head2=head2->next;
        //     ftail=ftail->next;
        // }
        // return fhead;
    }
};