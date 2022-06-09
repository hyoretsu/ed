#include "../headers/linked_list.h"
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    Node* next;
};

Node* ll_create_node(int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    if (!node) {
        return NULL;
    }

    node->value = value;
    node->next = node;

    return node;
}

int ll_is_empty(const Node* lhead) {
    return lhead == NULL;
}

int ll_size(Node* lhead) {
    int counter = 0;
    Node* first = lhead;

    // Cycle through the list
    while (lhead->next != first) {
        counter += 1;
        lhead = lhead->next;
    }

    return counter;
}

int ll_insert_first(Node** lhead, int value) {
    Node* newNode = ll_create_node(value);
    if (!newNode) {
        return 0;
    }

    newNode->next = *lhead;

    // Go to the end of the list
    Node* first = *lhead;
    while ((*lhead)->next != first) {
        *lhead = (*lhead)->next;
    }

    // Make last item point to the new one
    (*lhead)->next = newNode;
    // Set the list's beginning to the new node
    *lhead = newNode;

    return 1;
}

int ll_insert_last(Node** lhead, int value) {
    if (ll_is_empty(*lhead)) {
        return ll_insert_first(lhead, value);
    }

    Node* newNode = ll_create_node(value);
    if (!newNode) {
        return 0;
    }

    // Go to the end of the list
    Node* temp = *lhead;
    while (temp->next != *lhead) {
        temp = temp->next;
    }

    // Place new node at the end of the list
    temp->next = newNode;
    // Point new node back to the beginning of the list
    newNode->next = *lhead;

    return 1;
}

int ll_exists(Node* lhead, int value) {
    if (ll_is_empty(lhead)) {
        return 0;
    }

    // Cycle through the list
    Node* first = lhead;
    while (lhead != first) {
        if (lhead->value == value) {
            return 1;
        }

        lhead = lhead->next;
    }

    return 0;
}

void ll_print(Node* lhead, char* message) {
    printf("%s ", message);

    Node* first = lhead;
    while (lhead != first) {
        printf("%d ", lhead->value);

        lhead = lhead->next;
    }

    printf("\n");
}

void ll_clear(Node** lhead) {
    Node* first = *lhead;
    Node* next = NULL;
    Node* temp = *lhead;

    while (temp != first) {
        next = temp->next;

        free(temp);
        temp = next;
    }

    *lhead = NULL;
}

int ll_remove(Node** lhead, int value) {
    Node* first = *lhead;
    Node* last = NULL;
    Node* temp = *lhead;
    int found = 0;

    // Cycle through the list
    while (temp != first) {
        // Stop if given value was found
        if (temp->value == value) {
            found = 1;
            break;
        }

        last = temp;
        temp = temp->next;
    }

    if (found) {
        // If value was in the first element
        if (last == NULL) {
            // Shift the beginning of the list and remove it
            *lhead = temp->next;
            free(temp);

            return 1;
        }

        // Pop the element
        last->next = temp->next;
        free(temp);

        return 1;
    }

    return 0;
}

int ll_insert_sorted(Node** lhead, int value) {
    if (ll_is_empty(*lhead)) {
        ll_insert_first(lhead, value);

        return 1;
    }

    Node* newNode = ll_create_node(value);
    if (newNode) {
        Node* last = NULL;
        Node* temp = *lhead;

        // Cycle through the list until you find a >= value
        while (temp != NULL && temp->value < value) {
            last = temp;
            temp = temp->next;
        }

        // If given value's already the smallest one
        if (last == NULL) {
            newNode->next = *lhead;
            *lhead = newNode;
            return 1;
        }

        // Otherwise, insert new node between "last" and "next"
        newNode->next = last->next;
        last->next = newNode;
        return 1;
    }

    return 0;
}
