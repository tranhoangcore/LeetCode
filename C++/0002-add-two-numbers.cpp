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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy_head = new ListNode(0);
        ListNode *l3 = dummy_head;
        int carry = 0;
        while(l1 || l2){
            int l1_val = l1 ? l1->val : 0;
            int l2_val = l2 ? l2->val : 0;
            int current_sum = l1_val  + l2_val + carry;
            carry = current_sum / 10;
            int last_digit = current_sum % 10;
            l3->next = new ListNode(last_digit);
            l3 = l3->next;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        if(carry)
            l3->next = new ListNode(carry);
        return dummy_head->next;
    }
};