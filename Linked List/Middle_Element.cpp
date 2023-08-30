#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode* next;
};
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* res = head;
    int i = 0;
    while (head != NULL) {
        if (i % 2 == 1)
            res = res->next;
            head = head->next;
            i++; 
    }
    return res;
}
int main() {
    // Create a sample linked list
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)); head->val = 1;
    struct ListNode* node2 = (struct ListNode*)malloc(sizeof(struct ListNode)); node2->val = 2;
    struct ListNode* node3 = (struct ListNode*)malloc(sizeof(struct ListNode)); node3->val = 3;
    struct ListNode* node4 = (struct ListNode*)malloc(sizeof(struct ListNode)); node4->val = 4;
    struct ListNode* node5 = (struct ListNode*)malloc(sizeof(struct ListNode)); node5->val = 5;
    struct ListNode* node6 = (struct ListNode*)malloc(sizeof(struct ListNode)); node5->val = 6;

    head->next = node2; node2->next = node3;
    node3->next = node4; node4->next = node5; 
    node5->next = node6; node6->next = NULL;

    // Call the middleNode function
    struct ListNode* middle = middleNode(head);
    // Print the value of the middle node
    printf("Middle node value: %d\n", middle->val);
    return 0;
}
