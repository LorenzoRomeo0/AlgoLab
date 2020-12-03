#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

typedef char *string;

struct occorrenza{
char* word;
int n;
};
typedef struct occorrenza *Occorrenza;

typedef Occorrenza Item;

typedef struct bit_node{
    Item item;
    struct bit_node *l, *r;
} *Bit_node;
typedef struct bit_node *Bit_node;

string strcln(string s){
    int size = 0;
    string new = NULL;
    for(; s[size]!='\0'; size++);
    new = malloc(sizeof(char)*size);
    for(int i=0; i<=size; i++) new[i]=s[i];
    return new;
}

Bit_node search(Bit_node first, string word){
    Bit_node found = NULL;
    Bit_node uno = first;
    if(uno && uno ->item){
        if(strcmp(first->item->word, word)>0){
            found = search(first->l, word);
            if(!found) found = search(first->r, word);
        }else if(strcmp(first->item->word, word)==0) found = uno;
    }
    return found;
}

Bit_node bit_new (string word){
    Bit_node new = malloc(sizeof(struct bit_node));
    new ->item = malloc(sizeof(struct occorrenza));
    new -> item ->word = strcln(word);
    new -> item ->n = 1;
    new ->l = NULL;
    new ->r = NULL;
    return new;
}

Bit_node insert(Bit_node first, string word){
    if(!first) return first = bit_new(word);
    Bit_node uno = first;
    Bit_node found = search(first, word);
    if(found){
        found->item->n++;
        return first;
    }
    while(uno){
        if(strcmp(uno->item->word, word)>0){
            if(uno->l)uno = uno -> l;
            else{
                uno -> l = bit_new(word);
                break;
            }
        }else{
            if(uno->r)uno = uno -> r;
            else{
                uno -> r = bit_new(word);
                break;
            }
        }
    }
    return first;
}

void printnode(Bit_node bit){
    if(bit){
        printf("%s %d\n", bit ->item->word, bit->item->n);
    }
}

string strcopy(string s, int size){
    string s1 = malloc(sizeof(char)*(size+2));
    int i;
    for(int i=0; s[i]!='\0'; i++) s1[i]=s[i];
    s1[i]='\0';
    return s1;
}

string readline(){
    int size = 10;
    int i = 0;
    string new = malloc(sizeof(char)*size);
    char c;
    int iniziali = 1;
    while((c = getchar())){
        if(!isalpha(c)){
            if(iniziali)
                continue;
            else break;
        }
        c = (c<='Z' && c>='A')?'a'+c-'A':c;
        iniziali = 0;
        if(i<size) new[i++] = c;
        else{
            new = strcopy(new, size);
            size+=2;
            new[i++]=c;
        }
    }
    if(i<=size) new[i] ='\0';
    return new;
}

void bit_inorder (Bit_node bit){
    if(bit){
        bit_inorder(bit ->l);
        printnode(bit);
        bit_inorder(bit ->r);
    }
}

void bit_postorder (Bit_node bit){
     if(bit){
        bit_postorder(bit ->l);
        bit_postorder(bit ->r);
        printnode(bit);      
    }
}


int main(){
    Bit_node root;

    Bit_node radice = NULL;
    /*radice ->l = bit_new("54");
    radice ->r = bit_new("21");
    radice ->l ->r = bit_new("90");
    radice ->l ->r ->l = bit_new("19");
    radice ->l ->r ->r = bit_new("95");

    radice ->r ->l = bit_new("16");
    radice ->r ->r = bit_new("19");
    radice ->r ->l ->l = bit_new("5");
    radice ->r ->r -> l = bit_new("56");
    radice ->r ->r -> r = bit_new("43");*/
    /*radice = insert(radice, "cane");
    radice = insert(radice, "il");
    radice = insert(radice, "pesce");
    radice = insert(radice, "il");
    radice = insert(radice, "topo");
    radice = insert(radice, "il");*/
    string str = " ";
    while(1){
        str = readline();
        
        if(strcmp(str, "stop")==0) break;
        
        radice = insert(radice, str);
        
    }

    bit_inorder(radice);
    //printf("--%s--", (search(radice, "99"))?"trovato":"no");
    //string ciao = readline();
    //root = bit_new("ciao");

    /*
A cavallo, a cavallo, 
il re del Portogallo!
Il re delle paperette
suona le trombette.
    */


    return 0;
}






