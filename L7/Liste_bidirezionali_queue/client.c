#include "queue.h"
#include<stdlib.h>
#include<stdio.h>

int main(){
    Queue q = newqueue();
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    enqueue(q,6);
    enqueue(q,7);
    enqueue(q,8);
    enqueue(q,9);
    enqueue(q,10);
    dequeue(q);
    dequeue(q);
    //printf("%d\n",dequeue(q));
    enqueue(q,1);
    //printf("%d\n",dequeue(q));
    enqueue(q,2);
    /*printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));
    printf("%d\n",dequeue(q));*/

    
    print_queue(q);

    return 0;
}