#include <stdio.h>
#include <stdlib.h>

#define MAX 20

void insertQueue(int* array, int item, int* front, int* rear);
int  deleteQueue(int* array, int* front, int* rear);


int main(){
    int arrayQueue[MAX];
    int front = -1, rear = -1, i;

    insertQueue(arrayQueue, 10, &front, &rear);
    insertQueue(arrayQueue, 20, &front, &rear);
    insertQueue(arrayQueue, 30, &front, &rear);
    insertQueue(arrayQueue, 40, &front, &rear);
    insertQueue(arrayQueue, 50, &front, &rear);

    printf("deleted value: %d", deleteQueue(arrayQueue, &front, &rear));
    printf("deleted value: %d", deleteQueue(arrayQueue, &front, &rear));
    printf("deleted value: %d", deleteQueue(arrayQueue, &front, &rear));
    printf("deleted value: %d", deleteQueue(arrayQueue, &front, &rear));
    printf("deleted value: %d", deleteQueue(arrayQueue, &front, &rear));
    printf("deleted value: %d", deleteQueue(arrayQueue, &front, &rear));

    exit(0);
}


/*
    Add element to the Queue.
*/
void insertQueue(int* array, int item, int* front, int* rear){
    if (*rear == MAX - 1){
        printf("The Qeue is full.");
        return;
    }

    (*rear)++;
    array[*rear] = item;
    
    if (*front == -1)
        *front = 0;
}



/*
    Remove element from the Queue.
*/
int  deleteQueue(int* array, int* front, int* rear){
    if (*front == -1){
        printf("The Queue is empty.");
        return NULL;
    }

    int data = array[*front];
    array[*front] = 0;
    if (*front == *rear)
        *front = *rear = -1;
    else
        *front++;

    return data;
}
