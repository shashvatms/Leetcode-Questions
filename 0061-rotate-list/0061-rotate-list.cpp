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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp = head;
        if(count<k){
            k = k%count;
        }
        if(count==k||k==0){
            return head;
        }
        
        int i = count - k-1;

        int x=0;
        while(x<i){
            temp= temp->next;
            x++;
        }
        ListNode* a = temp->next;
        temp->next = NULL;
        temp = a;
        
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = head;
        return a;
    }
};