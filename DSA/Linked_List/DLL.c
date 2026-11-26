#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{
    struct Node *head, *second, *third;

    // creat a node 

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // assigning Data 

    head -> data = 10;
    second -> data = 20;
    third -> data = 30;


    // connecting Nodes 

    head -> prev = NULL;
    head -> next = second;

    second -> prev = head;
    second -> next = third;

    third -> prev = second;
    third -> next = NULL;


    // forward traversal

    printf("\n Forward :");

    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp -> next;
    }

    printf("NULL");

    // Backward Traversal

    printf("\n Backward :");

    temp = third;

    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp -> prev;
    }

    printf("NULL");
    
    return 0;
}