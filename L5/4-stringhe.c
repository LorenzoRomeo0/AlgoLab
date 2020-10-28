#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define SIZE 5

char* read_line(char c){
    char* car = (char*) malloc(sizeof(char)*SIZE);
    char lettera;
    int len = SIZE, pos = 0;
    
    while((lettera = getchar()) != c){
        if(pos==len){
            len += 2;
            car = realloc(car, sizeof(char)*len);
        }
        car[pos++]=lettera;
    }

    return car;
}

char* read_word(void){
    char* car = (char*) malloc(sizeof(char)*SIZE);
    char lettera;
    int len = SIZE, pos = 0;

    do{
        scanf("%c",&lettera);
        if(isalnum(lettera)){
            if(pos==len){
            len += 2;
            car = realloc(car, sizeof(char)*len);
        }
        car[pos++]=lettera;
        }else break;
    }while(1);
    
    /*while((lettera = getchar()) && (isalnum(lettera))){
        if(pos==len){
            len += 2;
            car = realloc(car, sizeof(char)*len);
        }
        car[pos++]=lettera;
    }*/
    if(pos==0)   return NULL;
    return car;
}

int main(){
    char *car = NULL;
    char *string = NULL;
    char carattere;
    scanf("%c", &carattere);
    car = read_line(carattere);
    printf("%s\n",car);

    scanf("%c", &carattere);    //svuota il buffer

    string = read_word();
    printf("%s",string);
}