#include "solution.h"
#include <stdio.h>

int main(){
    ListNode* l1 = new ListNode(2);
    ListNode* l2 = new ListNode(3);
    ListNode* result = NULL;
    ListNode* tempPointer= NULL;


    tempPointer = l1;
    for (int i = 0; i <= 5; i++) {
        tempPointer->next = new ListNode(i);
        tempPointer = tempPointer->next;
    }


    tempPointer = l2;
    for (int i = 0; i <= 7; i++) {
        tempPointer->next = new ListNode(i);
        tempPointer = tempPointer->next;
    }

    Solution test;

    result = test.addTwoNumbers(l1, l2);

    while(result != NULL) {
        printf("result: %d\n", result->val);
        result = result->next;
    }
    return 0;
}
