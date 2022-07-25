#include "stdio.h"
#include "stdlib.h"

struct ListNode {
    int val;
    struct ListNode *next;
};
void display(struct ListNode *head) {
    if (head == NULL) {
        printf("Empty List!\n");
        return;
    }
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}
struct ListNode *createNode() {
    struct ListNode *newNode =
        (struct ListNode *)malloc(sizeof(struct ListNode));
    if (newNode == NULL) {
        printf("Not Enough Memory!");
        exit(1);
    }
    return newNode;
}

void insertEnd(int val, struct ListNode **headRef) {
    struct ListNode *newNode, *last;
    newNode = createNode();
    last = *headRef;

    newNode->val = val;
    newNode->next = NULL;

    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    while (last->next != NULL) last = last->next;
    last->next = newNode;
}
struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
    struct ListNode *nextHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tmp = head;
    int length = 0;

    while (tmp != NULL) {
        length++;
        tmp = tmp->next;
    }
    length -= n;

    nextHead->next = head;
    tmp = nextHead;

    while (length > 0) {
        length--;
        tmp = tmp->next;
    }

    tmp->next = tmp->next->next;
    
    return nextHead->next;
}

int main() {
    struct ListNode *head = NULL, *tmp;
    insertEnd(45, &head);
    insertEnd(3, &head);
    insertEnd(9, &head);
    insertEnd(5, &head);
    display(head);

    tmp = removeNthFromEnd(head, 1);
    display(head);

    return 0;
}