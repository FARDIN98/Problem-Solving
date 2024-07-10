#include <stdio.h>
#include <stdlib.h>

struct dnode {
    int data;
    struct dnode *next;
    struct dnode *prev;
};

struct dnode *head = NULL;

void insertHead(int d) {
    struct dnode *newNode = (struct dnode *)malloc(sizeof(struct dnode));
    newNode->data = d;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertTail(int d) {
    struct dnode *newNode = (struct dnode *)malloc(sizeof(struct dnode));
    newNode->data = d;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    struct dnode *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void removeHead() {
    if (head == NULL) {
        printf("List is empty. Nothing to remove.\n");
        return;
    }

    struct dnode *temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
}

void removeTail() {
    if (head == NULL) {
        printf("List is empty. Nothing to remove.\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct dnode *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
}

struct dnode *search(int value) {
    struct dnode *current = head;
    
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    
    return NULL; // Value not found
}

void remove(int value) {
    struct dnode *current = head;

    // If list is empty
    if (head == NULL) {
        printf("List is empty. Nothing to remove.\n");
        return;
    }

    // If head node itself holds the value to be deleted
    if (current != NULL && current->data == value) {
        head = current->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(current);
        printf("Value %d removed from the list.\n", value);
        return;
    }

    // Search for the node with the given value
    while (current != NULL && current->data != value) {
        current = current->next;
    }

    // If value was not found
    if (current == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    // Remove the found node
    current->prev->next = current->next;
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    free(current);
    printf("Value %d removed from the list.\n", value);
}

void printList() {
    struct dnode *temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("The list is: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, choice;

    while (1) {
        printf("\n1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Remove from the beginning\n");
        printf("4. Remove from the end\n");
        printf("5. Remove a value\n");
        printf("6. Search\n");
        printf("7. Print the list\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                return 0;
            case 1:
                printf("Enter data: ");
                scanf("%d", &n);
                insertHead(n);
                printf("Done\n");
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &n);
                insertTail(n);
                printf("Done\n");
                break;
            case 3:
                removeHead();
                printf("Done\n");
                break;
            case 4:
                removeTail();
                printf("Done\n");
                break;
            case 5:
                printf("Enter the value to remove: ");
                scanf("%d", &n);
                remove(n);
                break;
            case 6:
                printf("Enter the value to search: ");
                scanf("%d", &n);
                if (search(n) != NULL) {
                    printf("Value %d found in the list.\n", n);
                } else {
                    printf("Value %d not found in the list.\n", n);
                }
                break;
            case 7:
                printList();
                break;
            default:
                printf("Wrong input!!!\n");
        }
    }
    return 0;
}


// offline hobe singly Linkedlist with dummy head implementation