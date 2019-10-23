#include<stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	a=72;
	printf("輸入一個數字:\n");
	scanf("%d",&b);
	
	if(b>a)
	printf("太大囉\n"); 
	else if(b<a){ 
	printf("太小囉\n");
	}
	else if(b==a){
	printf("\a bingo\n");
	}
	if(b!=a){
		printf("輸入一個數字:\n");
		scanf("%d",&b);
		if(b>a)
		printf("太大囉\n"); 	
		else if(b<a){ 
		printf("太小囉\n");
	}
		else if(b==a){
		printf("\a bingo\n");
	}} 
	
	
	
	system ( "pause" );
	return 0;
}
