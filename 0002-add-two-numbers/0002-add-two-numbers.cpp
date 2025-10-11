class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);          
        ListNode* tail = &dummy;   
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;

            carry = sum / 10;   
            int digit = sum % 10;

            tail->next = new ListNode(digit);
            tail = tail->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy.next;
    }
};
