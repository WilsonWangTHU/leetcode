#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode useless(0);
        ListNode* pointer = &useless;
        int sum = 0, residuel = 0;

        while (l1 || l2 || residuel) {
            sum = 0;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += residuel;

            if (sum >= 10) sum -= 10, residuel = 1; // cannot > 19
            else residuel = 0;

            pointer->next = new ListNode(sum);
            pointer = pointer->next;
        }
        return useless.next;
    }
};
