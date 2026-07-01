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
    bool isPalindrome(ListNode*head){
        if (head == NULL || head->next == NULL)
            return true;

        // Step 1: Find the middle
        ListNode *slow = head, *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Skip the middle node for odd-length lists
        if (fast != NULL) {
            slow = slow->next;
        }

        // Step 3: Reverse the second half
        ListNode *prev = NULL;
        while (slow != NULL) {
            ListNode *next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

        // Step 4: Compare both halves
        ListNode *first = head;
        ListNode *second = prev;

        while (second != NULL) {
            if (first->val != second->val)
                return false;

            first = first->next;
            second = second->next;
        }

        return true;
    }
};