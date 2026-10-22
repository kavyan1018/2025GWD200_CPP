#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;    // stack -> array ->index -> 0   -> -1(array out -> emty)

// push 
void push(int value){

    // push -> add the ele 

    // stack -> full
    if(top == SIZE - 1){
        printf("Stack is Overflow !!");
    }
    else{
        top++;    // -1  // +1  -> -1 + 1 = 0      // 2 + 1 = 3
        stack[top] = value;
        printf("\n %d Pushed\n", value);
    }
}

// pop
void pop(){

    // pop -> remove the ele from the stack 
    if(top == - 1){
        printf("\nStack is empty!!");
    }
    else{

        /*
            50      -> top  /  pop(remove)    ---> LIFO   -> Last in First Out
            40
            30
            20
            10
        */

        printf("\n %d pooped\n", stack[top]);
        top--;    
    }

}

// peek
void peek(){

    // peek -> display to top ele

    if (top == -1)
    {
        printf("Stack is empty !!!");
    }
    else{
        printf("\n %d Top element !!", stack[top]);
    }
}


// display
void display()
{
    if (top == -1)
    {
        printf("Stack is empty !!!");
    }
    else{
        for (int i = top ; i >= 0; i--)
        {
            printf("\n %d", stack[i]);
        }
    }
}


// main
void main()
{
    // ele push into array 
    push(10);
    push(20);
    push(30);
    push(40);

    // array ele display 
    display();

    // top ele display
    peek();

    // remove ele 
    pop();

    // after remove the ele 
    display();
}