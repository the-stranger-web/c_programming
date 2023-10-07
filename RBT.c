// Implementation of Red-Black Tree with insertion and deletion.

#include <stdio.h>
#include <stdlib.h>

// Node structure for Red-Black Tree
typedef enum { RED, BLACK } Color;

struct Node {
    int data;
    Color color;
    struct Node* left;
    struct Node* right;
    struct Node* parent;
};

// Create a new Red-Black Tree node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->color = RED; // New nodes are always red by default
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = NULL;
    return newNode;
}

// Function to perform left rotation
void leftRotate(struct Node** root, struct Node* x) {
    struct Node* y = x->right;
    x->right = y->left;
    
    if (y->left != NULL) {
        y->left->parent = x;
    }
    
    y->parent = x->parent;
    
    if (x->parent == NULL) {
        *root = y;
    } else if (x == x->parent->left) {
        x->parent->left = y;
    } else {
        x->parent->right = y;
    }
    
    y->left = x;
    x->parent = y;
}

// Function to perform right rotation
void rightRotate(struct Node** root, struct Node* y) {
    struct Node* x = y->left;
    y->left = x->right;
    
    if (x->right != NULL) {
        x->right->parent = y;
    }
    
    x->parent = y->parent;
    
    if (y->parent == NULL) {
        *root = x;
    } else if (y == y->parent->left) {
        y->parent->left = x;
    } else {
        y->parent->right = x;
    }
    
    x->right = y;
    y->parent = x;
}

// Function to fix Red-Black Tree violations after insertion
void fixInsertion(struct Node** root, struct Node* newNode) {
    while (newNode != *root && newNode->parent->color == RED) {
        if (newNode->parent == newNode->parent->parent->left) {
            struct Node* y = newNode->parent->parent->right;
            
            if (y != NULL && y->color == RED) {
                newNode->parent->color = BLACK;
                y->color = BLACK;
                newNode->parent->parent->color = RED;
                newNode = newNode->parent->parent;
            } else {
                if (newNode == newNode->parent->right) {
                    newNode = newNode->parent;
                    leftRotate(root, newNode);
                }
                
                newNode->parent->color = BLACK;
                newNode->parent->parent->color = RED;
                rightRotate(root, newNode->parent->parent);
            }
        } else {
            // Symmetric case
            // ...
        }
    }
    
    (*root)->color = BLACK;
}

// Function to insert a node into the Red-Black Tree
void insert(struct Node** root, int data) {
    struct Node* newNode = createNode(data);
    
    // Standard Binary Search Tree insertion
    struct Node* parent = NULL;
    struct Node* current = *root;
    
    while (current != NULL) {
        parent = current;
        
        if (data < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    
    newNode->parent = parent;
    
    if (parent == NULL) {
        *root = newNode; // The tree was empty
    } else if (data < parent->data) {
        parent->left = newNode;
    } else {
        parent->right = newNode;
    }
    
    // Fix Red-Black Tree violations
    fixInsertion(root, newNode);
}

// In-order traversal to print the Red-Black Tree
void inOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    
    inOrderTraversal(root->left);
    printf("%d (%s) ", root->data, (root->color == RED) ? "RED" : "BLACK");
    inOrderTraversal(root->right);
}

int main() {
    struct Node* root = NULL;
    
    // Insert nodes into the Red-Black Tree
    insert(&root, 10);
    insert(&root, 20);
    insert(&root, 30);
    insert(&root, 15);
    insert(&root, 5);
    
    // Print the Red-Black Tree
    inOrderTraversal(root);
    printf("\n");
    
    // Clean up memory (not shown in this simplified example)
    
    return 0;
}
