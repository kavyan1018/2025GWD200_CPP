#include <stdio.h>
#include <stdlib.h>

// node
struct Node
{
    int data;
    struct Node *next;
};

// Head Pointer 
struct Node *head = NULL;

// insert 
void CreatNode(){

    struct Node *newNode, *temp;
    
    // malloc -> dy memory allocation
    newNode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the Data :");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else{
        temp = head;

        while (temp->next !=  NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newNode;
    }

    printf("Node Inserted !!!");
}

void Display()
{   

    struct Node *temp = head;

    if (head == NULL)
    {
        printf("Linked List Empty !!!");
        return;
    }

    printf("Linked List :");

    // loop
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    
    printf("NULL\n");
}

void InsetatStart(){

}

void InsetatEnd(){
    
}

int main()
{

    int choice;

    while (1)
    {

        printf("\n1. Create Node !");
        printf("\n2. Disply Linked List !");
        printf("\n3. Insert at Beinning !");
        printf("\n4. Insert at End !");
        printf("\n5. Exit !");

        printf("\n Enter Your Choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            CreatNode();
            break;

        case 2:
            Display();
            break;

        case 3:
            InsetatStart();
            break;

        case 4:
            InsetatEnd();
            break;

        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Choice !!! ");
            break;
        }
    }
}