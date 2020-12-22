#include<stdio.h>
#include<stdlib.h>

typedef int Item;

typedef struct bit_node{
    Item item;
    struct bit_node *l, *r;
} *Bit_node;

typedef struct bit_node *Bit_node;

Bit_node bit_new (Item item){
    Bit_node new = malloc(sizeof(struct bit_node));
    new ->item = item;
    new ->l = NULL;
    new ->r = NULL;
    return new;
}

void printnode(Bit_node bit){
    if(bit){
        printf("%d ", bit ->item);
    }
}

void bit_preorder (Bit_node bit){
    if(bit){
        printnode(bit);
        bit_preorder(bit ->l);
        bit_preorder(bit ->r);
    }
}

void bit_inorder (Bit_node bit){
    if(bit){
        bit_preorder(bit ->l);
        printnode(bit);
        bit_preorder(bit ->r);
    }
}

void bit_postorder (Bit_node bit){
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

Bit_node bit_arr2tree ( Item a[] , int size , int i){
    printf("--%d\n",a[i]);
    Bit_node b = bit_new(a[i]);
    if(2*i+1<size){
        b ->l = bit_arr2tree(a, size, 2*i+1);
        b ->r = bit_arr2tree(a, size, 2*i+2);
    }
    return b;
}

int main(){
    /*Bit_node radice = bit_new(78);
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
    */
    /*bit_preorder(radice);
    printf("\n");
    bit_inorder(radice);
    printf("\n");
    bit_postorder(radice);
    printf("\n");
    bit_printassummary(radice, 0);
    printf("\n");*/
    Bit_node b;
    int a[] = {69,89,28,39,66,44,12,2,71};
    b = bit_arr2tree(a, 9, 0);
    bit_printassummary(b, 0);
    //bit_inorder(b);
    return 0;
}