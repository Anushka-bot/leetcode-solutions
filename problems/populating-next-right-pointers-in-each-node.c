#include <stdio.h>

struct Node {
    int val;
    struct Node *left;
    struct Node *right;
    struct Node *next;
};

struct Node *connect(struct Node *root) {
    struct Node *check = root, *node;
    while (check != NULL && check->left !=NULL) {
        node = check;
        while (1) {
            node->left->next = node->right;
            if (node->next == NULL) break;
            node->right->next = node->next->left;
            node = node->next;
        }
        check = check->left;
    }
    return root;
}