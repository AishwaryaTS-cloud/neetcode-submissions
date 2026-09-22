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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* curr = slow->next;
        ListNode* prev = NULL;

        slow->next = NULL;

        while(curr){
            ListNode* newNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = newNode;
        }

        ListNode* first = head ;
        ListNode* sec = prev;

        while(sec){
            ListNode* n1 = first->next;
            ListNode* n2 = sec->next;

            first->next = sec;
            sec->next = n1;

            first = n1;
            sec = n2;
        }
        
    }
};
