#include<stdio.h>
#include<limits.h>

int main(){

    int a;
    long b;
    short c;
    float d;
    char e;

    printf("INT: size: %ld, range: %d ... %d\n", sizeof(a), INT_MIN, INT_MAX);
    printf("LONG: size: %ld, range: %ld ... %ld\n", sizeof(b), LONG_MIN, LONG_MAX);
    printf("SHORT: size: %ld, range: %d ... %d\n", sizeof(c), SHRT_MIN, SHRT_MAX);
    //printf("FLOAT: size: %ld, range: %f ... %f\n", sizeof(d), FLOAT_MIN, FLOAT_MAX);
    printf("CHAR: size: %ld, range: %d ... %d\n", sizeof(e), CHAR_MIN, CHAR_MAX);
    return 0;
}