#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;   // first ele 
int rear = -1;  // last ele 

void enqueue(int value)
{

    if (rear == SIZE - 1)    // 5  -> 0 1 2 3 4   == 5 - 1  =  4 
    {
        printf("\nQueue OverFlow!!");
    }
    else{
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        printf("\n%d inserted into Queue", value);
    }
}

void dequeue()
{

    if (front == -1 || front > rear)
    {
        printf("\nQueue UnderFlow!!");
    }else{

        printf("\n %d removed from queue", queue[front]);
        front++;

        if (front > rear)
        {
            front = rear - 1;
        }
    }
}


void display()
{

    if (front == -1)
    {
        printf("\n The Queue id Empty !!!");
    }
    else{
        printf("\nQueue Elements :");

        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();

    return 0;
}