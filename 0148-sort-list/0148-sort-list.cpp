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
    ListNode* findmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right){
        if(!left){
            return right;
        }
        if(!right){
            return left;
        }
        if(left->val <= right->val){
            left->next = merge(left->next,right);
            return left;
        }
        else{
            right->next = merge(left,right->next);
            return right;
        }
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* mid = findmid(head);
        ListNode* rightmost = mid->next;
        mid->next = NULL;
        ListNode* leftsort = sortList(head);
        ListNode* rightsort = sortList(rightmost);
        return merge(leftsort,rightsort);
    }
};