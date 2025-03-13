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
#

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;  // Pointer to traverse the list

        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Remove duplicate by skipping the next node
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                // Move to the next unique node
                current = current->next;
            }
        }
        return head; // Return modified list
    }
};