#ifndef STACK_H
#define STACK_H

typedef int Item;

typedef struct queue{
    Item *list;
    int front, queue;
    int n;
} *Queue;


Queue newqueue();

// Put element on rear
void enqueue( Queue, Item );

// Remove and return element from front
Item dequeue( Queue );

// Return front element
Item frontvalue( Queue );

// Check if queue is empty
int is_empty_queue( Queue );

// Print queue content
void print_queue( Queue );
#endif