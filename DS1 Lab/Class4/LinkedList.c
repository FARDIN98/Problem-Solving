#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertHead(int d)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = d;
    newNode->next = head;
    head = newNode;
}

void insertTail(int d)
{
    if (head == NULL)
    {
        insertHead(d);
        return;
    }
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = d;
    newNode->next = NULL;

    struct node *n = head;

    while (n->next != NULL)
    {
        n = n->next;
    }
    n->next = newNode;
}

int insertAfter(int data, int after)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == after)
        {
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = data;
            newNode->next = temp->next;
            temp->next = newNode;
            return 1; // Insertion successful
        }
        temp = temp->next;
    }
    return 0; // Insertion failed (value 'after' not found)
}

int removeHead(){
    if (head == NULL) return 0;

    struct node *n = head;
    head = head->next;
    free(n);
    return 1;
}

void printList()
{
    struct node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int n, choice;

    while (1)
    {
        printf("1. Insert at the beginning\n");
        printf("2. Insert in the end\n");
        printf("3. Insert after a value\n");
        printf("4. Print List\n");
        printf("0. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            printf("\nEnter data: ");
            scanf("%d", &n);
            insertHead(n);
            printf("Done\n\n");
            break;
        case 2:
            printf("\nEnter data: ");
            scanf("%d", &n);
            insertTail(n);
            printf("Done\n\n");
            break;
        case 3:
            printf("\nEnter data to insert: ");
            scanf("%d", &n);
            printf("Enter value to insert after: ");
            int after;
            scanf("%d", &after);
            if (insertAfter(n, after))
                printf("Done\n\n");
            else
                printf("Value %d not found in the list\n\n", after);
            break;
        case 4:
            printList();
            break;
        default:
            printf("Wrong input!!!\n");
        }
    }
    return 0;
}
