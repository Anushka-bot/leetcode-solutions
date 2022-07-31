#include "stdio.h"
#include "stdlib.h"

struct ListNode {
    int data;
    struct ListNode *next;
};
struct ListNode *createNode() {
    struct ListNode *newNode =
        (struct ListNode *)malloc(sizeof(struct ListNode));
    if (newNode == NULL) {
        printf("Not Enough Memory!");
        exit(1);
    }
    return newNode;
}
void insertEnd(int data, struct ListNode **headRef) {
    struct ListNode *newNode, *last;
    newNode = createNode();
    last = *headRef;

    newNode->data = data;
    newNode->next = NULL;

    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    while (last->next != NULL) last = last->next;
    last->next = newNode;
}
void display(struct ListNode *head) {
    if (head == NULL) {
        printf("Empty List!\n");
        return;
    }
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct ListNode *removeElements(struct ListNode *head, int val) {
    struct ListNode *tmp = head;
    if(head == NULL) return NULL;
    if(head->data == val) return removeElements(head->next, val);

    while (tmp->next) {
        if (tmp->next->data == val) 
            tmp->next = tmp->next->next;
        tmp = tmp->next;
    }
    return head;
}                                            

int main() {
    struct ListNode *head = NULL;
    insertEnd(6, &head);
    insertEnd(6, &head);
    insertEnd(6, &head);
    insertEnd(6, &head);
    insertEnd(6, &head);
    insertEnd(6, &head);
    display(head);
    head = removeElements(head, 6);
    display(head);

    return 0;
}