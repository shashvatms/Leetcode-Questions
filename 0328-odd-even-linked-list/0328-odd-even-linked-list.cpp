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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* evenhead = NULL;
        ListNode* eventail = NULL;
        ListNode* oddhead = NULL;
        ListNode* oddtail = NULL;
        ListNode* temp = head;
        int i=0;
        while(temp){
            if(i%2!=0){
                if(evenhead==NULL){
                    evenhead = temp;
                    eventail = temp;
                }
                else{
                    eventail->next = temp;
                    eventail = eventail->next;
                }
            }
            else{
                if(oddhead == NULL){
                    oddhead = temp;
                    oddtail = temp;
                }
                else{
                    oddtail->next = temp;
                    oddtail = oddtail->next;
                }
            }
            i++;
            temp = temp->next;
        }
        if(evenhead==NULL){
            oddtail->next = NULL;
            return oddhead;
        }
        eventail->next = NULL;
        if(oddhead==NULL){
            return evenhead;
        }
        ListNode* curr = oddhead;
        oddtail->next = evenhead;
        return oddhead;
    }
};