#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Insert at beginning
void insertBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

// Insert at end
void insertEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

// Insert after a given key
void insertAfter(int key, int value) {
    if (head == NULL) return;

    struct Node* temp = head;
    do {
        if (temp->data == key) {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);

    printf("Key %d not found\n", key);
}

// Delete a node
void deleteNode(int key) {
    if (head == NULL) return;

    struct Node *current = head, *prev = NULL;

    // If head is the node to be deleted
    if (head->data == key) {
        // Only one node
        if (head->next == head) {
            free(head);
            head = NULL;
            return;
        }

        // Find last node to update its next
        struct Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = head->next;
        struct Node* toDelete = head;
        head = head->next;
        free(toDelete);
        return;
    }

    // Deleting non-head node
    do {
        prev = current;
        current = current->next;
        if (current->data == key) {
            prev->next = current->next;
            free(current);
            return;
        }
    } while (current != head);

    printf("Node with data %d not found\n", key);
}

// Display the list
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertBeginning(5);
    insertAfter(20, 25);
    display(); // 5 10 20 25 30

    deleteNode(5);
    deleteNode(25);
    deleteNode(30);
    display(); // 10 20

    return 0;
}