#include<stdio.h>

int main(){
    short h, m, am=0;
    scanf("%hd:%hd",&h,&m);
    if(h>12){ h=h-12; am = 1;}
    if(h>=10){
        printf("%hd:", h);
    }else{
        printf("0%hd:", h);
    }
    if(m>9){
        printf("%hd", m);
    }else{
        printf("0%hd", m);
    }
    if(am == 0) printf("AM\n");
    else printf("PM\n");
    return 0;
}
