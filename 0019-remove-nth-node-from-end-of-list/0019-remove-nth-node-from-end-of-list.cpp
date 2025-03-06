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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==n){
            return head->next;
        }
        int pos = count - n-1;
        temp = head;
        int j=0;
        while(temp && j<pos){
            j++;
            temp = temp->next;
        }
        if(temp->next!=nullptr){
            temp->next = temp->next->next;
        }
        return head;
    }
};