#include <stdlib.h>
#include "../headers/binary_tree.h"

struct node {
    int info;
    Node* left;
    Node* right;
};

Node* tree_insert(Node* node, int value) {
    // Create tree if it doesn't exist
    if (node == NULL) {
        node = (Node*) malloc(sizeof(Node*));
        if (!node) {
            return NULL;
        }

        node->info = value;
        node->left = NULL;
        node->right = NULL;
    };

    if (node->info > value) {
        node->left = node_insert(node->left, value);
    } else if (node->info < value) {
        node->right = node_insert(node->right, value);
    }

    return node;
}

Node* tree_remove(Node* node, int value) {
    if (node == NULL) return NULL;
    
    // Keep trying to remove until desired node was found
    if (node->info > value) {
        node->left = node_remove(node->left, value);
    } else if (node->info < value) {
        node->right = node_remove(node->right, value);
    }

    if (node->left == NULL && node->right == NULL) { // No children
        free(node);
        node = NULL;
    } else if (node->left == NULL) { // Right children
        Node* temp = node;
        node = node->right;
        free(temp);
    } else if (node->right == NULL) { // Left children
        Node* temp = node;
        node = node->left;
        free(temp);
    } else { // Both children
        Node* f = node->left;
        while (f->right != NULL) {
            f = f->right;
        }
        node->info = f->info;
        f->info = value;
        node->left = remove(node->left, value);
    }

    return node;
}

Node* tree_search(Node* node, int value) {
    if (node == NULL) return NULL;

    if (node->info == value) return node;

    if (node->info > value) {
        return node_search(node->left, value);
    } else if (node->info < value) {
        return node_search(node->right, value);
    }
}
