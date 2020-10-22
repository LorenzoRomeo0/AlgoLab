#include "libpsgraph.h"
#include<stdio.h>


void koch(float len, int i){
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

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	start("grafico1.ps");
	koch(a,b);
	end();
}
















