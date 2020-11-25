#include<stdio.h>
#include<stdlib.h>

typedef int Item;

typedef struct bit_node{
    Item item;
    struct bit_node *l, *r;
} *Bit_node;
typedef struct bit_node *Bit_node;

Bit_node bit_new ( Item item){
    Bit_node new = malloc(sizeof(struct bit_node));
    new ->item = item;
    new ->l = NULL;
    new ->r = NULL;
    return new;
}

void printnode( Bit_node bit ){
    if(bit){
        printf("%d ", bit ->item);
    }
}

void bit_preorder ( Bit_node bit){
    if(bit){
        printnode(bit);
        bit_preorder(bit ->l);
        bit_preorder(bit ->r);
    }
}

void bit_inorder ( Bit_node bit){
    if(bit){
        bit_preorder(bit ->l);
        printnode(bit);
        bit_preorder(bit ->r);
    }
}

void bit_postorder ( Bit_node bit){
     if(bit){
        bit_preorder(bit ->l);
        bit_preorder(bit ->r);
        printnode(bit);      
    }
}

void bit_printassummary (Bit_node bit, int spaces){
    for(int i=0; i<spaces; i++) printf(" ");
    spaces+=2;
    
    printf("*");
    if(bit){
        printnode(bit);
        if(bit->l || bit ->r){
            printf("\n");
            bit_printassummary(bit ->l, spaces);
            if(bit->l) printf("\n");
            bit_printassummary(bit ->r, spaces);
            if(bit->r) printf("\n");
        }
    }else printf("\n");
   
}


int main(){
    Bit_node radice = bit_new(78);
    radice ->l = bit_new(54);
    radice ->r = bit_new(21);
    radice ->l ->r = bit_new(90);
    radice ->l ->r ->l = bit_new(19);
    radice ->l ->r ->r = bit_new(95);

    radice ->r ->l = bit_new(16);
    radice ->r ->r = bit_new(19);
    radice ->r ->l ->l = bit_new(5);
    radice ->r ->r -> l = bit_new(56);
    radice ->r ->r -> r = bit_new(43);

    bit_preorder(radice);
    printf("\n");
    bit_inorder(radice);
    printf("\n");
    bit_postorder(radice);
    printf("\n");
    bit_printassummary(radice, 0);
    return 0;
}