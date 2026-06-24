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
        if (head == NULL || head->next == NULL) {
            return;
        }

        vector<ListNode*> ref;
        ListNode* tmp = head;

        while (tmp != NULL) {
            ref.push_back(tmp);
            tmp = tmp->next;
        }

        ListNode* temp = head;
        int s = 1;
        int e = ref.size() - 1;

        for (int i = 1; i < ref.size(); i++) {
            if (s > e) {
                break;
            }
            if (i % 2 == 1) {
                temp->next = ref[e];
                e--;
            } 
            else {
                temp->next = ref[s];
                s++;
            }
            temp = temp->next;
        }
        temp->next = NULL;   // Important!
    }
};