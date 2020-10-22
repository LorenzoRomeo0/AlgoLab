#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    char array[10][10];
    char lettera = 'A';
    int y=0, x=0, y1=0, x1=0;

    for(int i = 0; i<10; i++)
        for(int j = 0; j<10; j++)
            array[i][j]='.';

    array[0][0]=lettera;
    for(int i = 0; i<25; i++){
        lettera++;
        srand(time(NULL)+i);
        int pos = rand()%4;
        int check = 0;
        while(check<4){
            if(pos == 0)
                y--;
            else if(pos == 1)
                y++;
            else if(pos == 2)
                x--;
            else if(pos == 3)
                x++;
            
            if(y>=0 && y<10 && x>=0 && x<10 && array[y][x] == '.'){
                array[y][x] = lettera;
                x1 = x;
                y1 = y;
                break;
            }else{
                check++;
                pos = (pos+1)%4;
                x = x1;
                y = y1;
            }

            if(check == 4){
                i=26;
                break;
            }
        }
    }
    
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            printf("%c ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}