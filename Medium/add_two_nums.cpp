// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* current = head;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int v1 = 0, v2 = 0;
            if (l1 != nullptr) v1 = l1->val;
            if (l2 != nullptr) v2 = l2->val;

            int sum = v1 + v2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            current->next = new ListNode(digit);
            current = current->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return head->next;
    }
};
