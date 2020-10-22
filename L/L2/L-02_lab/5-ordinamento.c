#include<stdio.h>
#define N 100


int main(){
    int cont[N], num, comodo = {0};
    for(int i=0; i<N; i++)cont[i]=0;

    for(int i=0; i<N; i++){
        scanf("%d",&num);
        if(num == 0) break; 
        else{
            for(int j=0; j<N; j++){
                if(cont[j]==0){cont[j]=num; j=N; continue;}
                if(cont[j]>=num){
                    for(int k = j; k<N; k++){
                        if(cont[k]==0){break;}
                        comodo = cont[k];
                        cont[k] = num;
                        num = comodo;
                    }
                }
            }
        }
    }
    for(int i=0; i<N; i++){
        if(cont[i]==0) break;
        printf("%d ",cont[i]);
    }

    return 0;
}