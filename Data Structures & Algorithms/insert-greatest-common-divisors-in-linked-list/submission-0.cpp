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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* current = head;

        while (current != NULL && current->next != NULL) {
            int value = gcd(current->val, current->next->val);

            ListNode* node = new ListNode(value);

            node->next = current->next;
            current->next = node;

            current = node->next;
        }

        return head;
    }
};