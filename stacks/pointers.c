/*
    This Module constains the pointer based stack with dynamicly resizable.
*/

#include <stdlib.h>
#include <stdio.h>

#define GROW_CAPACITY(oldCapacity) ((oldCapacity) < 8 ? 8 : (oldCapacity * 2))
#define GROW_ARRAY(type, pointer, oldCapacity, newCapacity) (type*)reallocate(pointer, sizeof(oldCapacity), sizeof(newCapacity))

void* reallocate(void* pointer, size_t oldCapacity, size_t newCapacity){
    if (newCapacity == 0){
        free(pointer);
        return NULL;
    }

    void* result = realloc(pointer, newCapacity);
    if (result == NULL) exit(1);

    return result;
}



struct Stack{
    int* values;
    int* stackTop;
    int count;
    int capacity;
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
    pushStack(&s, 60);
    pushStack(&s, 70);
    pushStack(&s, 80);
    pushStack(&s, 90);


    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));
    printf("poped value: %d\n", popStack(&s));

    pushStack(&s, 50);
    pushStack(&s, 60);
    pushStack(&s, 70);
    pushStack(&s, 80);
    pushStack(&s, 90);


    return 0;
}



/*
    Initializing the stack.
*/

void initStack(struct Stack* stack){
    stack->count = 0;
    stack->capacity = 0;
    stack->stackTop = stack->values;
    stack->values = NULL;
}

/*
     Add an element to the stack.
*/
void pushStack(struct Stack* stack, int data){
   if (stack->count + 1 >= stack->capacity){
    int capacity = GROW_CAPACITY(stack->capacity);
    stack->values = GROW_ARRAY(int, stack->values, stack->capacity, capacity);
   }

   *stack->stackTop = data;
   stack->stackTop++;
   stack->count++;
}


/*
    Remove element from the stack.
*/
int popStack(struct Stack* stack){
    if (stack->count <= 0){
        printf("stack underflow.\n");
        exit(75);
    }
    stack->count--;
    stack->stackTop--;
    return *stack->stackTop;
}


