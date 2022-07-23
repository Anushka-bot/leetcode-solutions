#include "stdio.h"
#include "stdlib.h"

struct ListNode {
    int val;
    struct ListNode *next;
};

void display(struct ListNode *head){
    if(head == NULL){
        printf("Empty List\n");
        return;
    }
    printf("List : ");
    while(head != NULL){
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode head, *ptr = &head;
    head.next = NULL;

    while (list1 && list2){
        if (list1->val < list2->val ){
            ptr->next = list1;
            list1 = list1->next;
        }else{
            ptr->next = list2;
            list2 = list2->next;
        }
        ptr = ptr->next;
    }

    if(list1)
        ptr->next = list1;
    if(list2)
        ptr->next = list2;
    return head.next;
}

struct ListNode * createNode(int val) {
    struct ListNode *newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}



int main(){
    struct ListNode *node1 = createNode(2);
    struct ListNode *node2 = createNode(4);
    struct ListNode *n1 = createNode(6);
    struct ListNode *n2 = createNode(7);
    struct ListNode *n3 = createNode(9);
    struct ListNode *n4 = createNode(12);
    struct ListNode *n5 = createNode(25);
    struct ListNode *n6 = createNode(36);
    struct ListNode *n7 = createNode(57);
    struct ListNode *merged;
    
    

    node1->next = n1;
    n1->next = n2;
    n2->next = n5;
    n5->next = n7;


    node2->next = n3;
    n3->next = n4;
    n4->next = n6;

    merged = mergeTwoLists(node1, node2);
    display(merged);

    return 0;
}

