#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

#define SIZE 10

// Put element on rear

Queue newqueue(){
    Queue q = malloc(sizeof(struct queue));
    q -> list = malloc(sizeof(Item)*SIZE);
        q -> front = -1;
        q -> queue = -1;
        q -> n = 0;
        return q;
}

void enqueue( Queue q, Item i){
    if(q->front ==-1){
        q -> list[0] = i;
        q -> front = 0;
        q -> queue = 1;
        q -> n = 1;
    }else{
        if(q -> queue % SIZE == q -> front ){
            perror("Lista piena");
            exit(1);
        }
        q -> list[(q -> queue++) % SIZE] = i;
        q -> queue %= SIZE;
        q -> n++;
    }

}

// Remove and return element from front
Item dequeue( Queue q ){
    Item item = 0;
    if(q -> list == NULL){
        perror("Lista inesistente.");
        exit(1);
    }
    if(q -> n == 0){
        perror("Lista vuota.");
        exit(1);
    }
    item = q -> list[q -> front++ % SIZE];
    q -> front %= SIZE;
    q -> n--;
    return item;
}

// Return front element
Item frontvalue( Queue q ){
    if(q -> list == NULL){
        perror("Lista inesistente.");
        exit(1);
    }
    if(q -> n == 0){
        perror("Lista vuota.");
        exit(1);
    }
    return q -> list[q -> front % SIZE];
}

// Check if queue is empty
int is_empty_queue( Queue q ){
    return q -> front == q -> queue && q -> n == 0;
}

// Print queue content
void print_queue( Queue q ){

    printf("[");
    int i = 0;
    for(i = q -> front; i!= (q -> queue-1)%SIZE; i = (++i % SIZE)){
        printf("%d ", q ->list[i]);
    }
    printf("%d]", q ->list[i]);
    
}