#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if( (b*b-4*a*c)>0){
        printf("%f\n", (-b - sqrt(b*b-4*a*c))/2*a);
        printf("%f\n", (-b + sqrt(b*b-4*a*c))/2*a);
    }else{
        printf("%f\n", (float)b/2*a);
        printf("%f - i%f\n", (float)-(b/2*a), sqrt(-(b*b-4*a*c))/2*a);
        printf("%f + i%f\n", (float)-(b/2*a), sqrt(-(b*b-4*a*c))/2*a);
    }
    

    return 0;
}