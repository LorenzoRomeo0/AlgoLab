#include<stdio.h>
#include<string.h>

void smallest_largest( char *s[], int n, char **smallest, char **largest ){
    *smallest = s[0];
    *largest = s[0];
    for(int i=0; i<n; i++){
        if(strcmp(s[i], *largest)>0){
            *largest = s[i];
        }else if(strcmp(s[i],*smallest)<0){
            *smallest = s[i];
        }
    }

}


int main(){
    char* smallest, *largest;
    char* s[] = {"zzz", "bbb", "aaa", "ffff"};
    smallest_largest(s, 4, &smallest, &largest);
    printf("%s %s\n", smallest, largest);
    return 0;
}