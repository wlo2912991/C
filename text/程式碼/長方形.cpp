#include<stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c,d;
	printf("長為:\n");
	scanf("%d",&a);
	printf("高為:\n");
	scanf("%d",&d);
	for(c=0;c<d;c++){
		for(b=0;b<a;b++){
	printf("*");
	}
	printf("\n");
	}
} 
