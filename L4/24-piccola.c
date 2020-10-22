#include<stdio.h>
#include <string.h>

typedef char* String;

int smallest_word_index( String s[], int n ){
    int smallest = 0;

    for(int i=0; i<n; i++){
        if(strcmp(s[i], s[smallest])<0){
            smallest = i;
        }
    }
    return smallest;
}

String *smallest_word_address( String s[], int n ){
    String *smallest = s;

    for(int i=0; i<n; i++){
        if(strcmp(s[i], *smallest)<0){
            smallest = &s[i];
        }
    }
    return smallest;


}

int main(){
    String s[] = {"zzz", "bbb", "aaa", "ffff"};
    printf("%s %s\n",s[smallest_word_index(s, 4)], *smallest_word_address(s,4));
    return 0;
}