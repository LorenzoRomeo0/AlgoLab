#include<stdio.h>
#include<ctype.h>


void cifrecontenute(int* array){
    for(int i = 0; i<10; i++){
        if(array[i] > 0){
            printf("%d\n", i);
        }
    }
}

void cifreripetute(int* array){
    for(int i = 0; i<10; i++){
        if(array[i] > 1){
            printf("%d\n", i);
        }
    }
}

int main(){
    int c, f[10] = {0};

    c = getchar();
    while ( c != '.' ) {
        if ( isdigit( c ) ) 
	        f[ c - '0' ]++;
	    c = getchar();
    }

    printf("\n---\n\n");
    cifrecontenute(f);
    printf("\n---\n\n");
    cifreripetute(f);
    return 0;
}