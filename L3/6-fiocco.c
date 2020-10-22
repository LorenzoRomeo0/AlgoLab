#include "libpsgraph.h"
#include<stdio.h>


int koch(float len, int i){
	if(i==0){
		draw(len);
	}else if(i==1){
		koch(len, i-1);
		turn(-60);
		koch(len, i-1);
		turn(120);
		koch(len, i-1);
		turn(-60);
		koch(len, i-1);
	}else{
		koch(len/3, i-1);
		turn(-60);
		koch(len/3, i-1);
		turn(120);
		koch(len/3, i-1);
		turn(-60);
		koch(len/3, i-1);
	}
}

void triangolo(float len, int i){
	turn(-60);
	koch(len,i);
	turn(120);
	koch(len,i);
	turn(120);
	koch(len,i);
}

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	start("grafico1.ps");
	triangolo(a,b);
	end();
}



