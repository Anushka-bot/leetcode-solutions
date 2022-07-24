#include "stdio.h"

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* tmp = head;
    int len = 0;

    while (tmp) {
        len++;
        tmp = tmp->next;
    }

    tmp = head;
    len = len / 2;
    while (len) {
        tmp = tmp->next;
        len--;
    }
    return tmp;
}
int main() { return 0; }