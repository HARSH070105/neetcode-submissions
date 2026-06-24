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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* answer;

        if (t1->val <= t2->val) {
            answer = t1;
            t1 = t1->next;
        } else {
            answer = t2;
            t2 = t2->next;
        }

        ListNode* list = answer;

        while (t1 != NULL && t2 != NULL) {
            if (t2->val <= t1->val) {
                list->next = t2;
                t2 = t2->next;
            } else {
                list->next = t1;
                t1 = t1->next;
            }
            list = list->next;
        }

        if (t1 != NULL) {
            list->next = t1;
        } else {
            list->next = t2;
        }

        return answer;
    }
};