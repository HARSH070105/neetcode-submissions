class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            sz++;
            temp = temp->next;
        }

        if (sz == n) {
            return head->next;
        }

        temp = head;

        for (int i = 0; i < sz - n - 1; i++) {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};