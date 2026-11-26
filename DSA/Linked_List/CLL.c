#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{
    struct Node *head, *second, *third;

    // creat a node

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // assigning Data

    head->data = 10;
    second->data = 20;
    third->data = 30;

    // connecting Nodes
    head->next = second;
    second->next = third;

    // last node -> point to head
    third->next = head;

    // Display circular ll

    struct Node *temp = head;
    printf("\n circular Linked List :");

    if (head != NULL)
    {
        do
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }

    printf("(Back to Head)");
    return 0;
}