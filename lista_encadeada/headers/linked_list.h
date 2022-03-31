#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node Node;

Node* ll_create_node(int value);
int ll_is_empty(Node* lhead);
int ll_size(Node* lhead);
int ll_insert_first(Node** lhead, int value);
int ll_insert_last(Node** lhead, int value);
int ll_exists(Node* lhead, int value);
void ll_print(Node* lhead, char* message);
void ll_clear(Node** lhead);
int ll_remove(Node** lhead, int value);
int ll_insert_sorted(Node** lhead, int value);

#endif
