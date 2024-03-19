/*
    This Module constains the array based stack with capacity of 10 elements.
*/

#include <stdlib.h>
#include <stdio.h>


#define STACKMAX 10

struct Stack{
    int values[STACKMAX];
    int stackTop;
};

void initStack(struct Stack* stack);
void pushStack(struct Stack* stack, int data);
int popStack(struct Stack* stack);



int main(){
    struct Stack s;
    int i;

    initStack(&s);

    pushStack(&s, 10);
    pushStack(&s, 20);
    pushStack(&s, 30);
    pushStack(&s, 40);
    pushStack(&s, 50);

    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));


    return 0;
}



/*
    Initializing the stack.
*/

void initStack(struct Stack* stack){
    stack->stackTop = -1;
}

/*
     Add an element to the stack.
*/
void pushStack(struct Stack* stack, int data){
    if (stack->stackTop == STACKMAX - 1){
        printf("Stack Overflow.");
        return;
    }
    stack->stackTop++;
    stack->values[stack->stackTop] = data;
}


/*
    Remove element from the stack.
*/
int popStack(struct Stack* stack){
    if (stack->stackTop == -1){
        printf("Stack Underflow.");
        return NULL;
    }
    int data = stack->values[stack->stackTop];
    stack->stackTop --;
    return data;

}


