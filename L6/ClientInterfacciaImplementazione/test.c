#include "stack.h"
#include<stdio.h>

int main(){
    make_empty();
    printf("%s\n",is_empty()?"vuoto":"non  vuoto");
    push(1);
    push(2);
    push(17);
    print_stack();
    printf("%d\n", top());
    printf("%d\n", pop());
    printf("%d\n", pop());
    print_stack();
}