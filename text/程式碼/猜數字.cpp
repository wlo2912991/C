#include<stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	a=72;
	printf("��J�@�ӼƦr:\n");
	scanf("%d",&b);
	
	if(b>a)
	printf("�Ӥj�o\n"); 
	else if(b<a){ 
	printf("�Ӥp�o\n");
	}
	else if(b==a){
	printf("\a bingo\n");
	}
	if(b!=a){
		printf("��J�@�ӼƦr:\n");
		scanf("%d",&b);
		if(b>a)
		printf("�Ӥj�o\n"); 	
		else if(b<a){ 
		printf("�Ӥp�o\n");
	}
		else if(b==a){
		printf("\a bingo\n");
	}} 
	
	
	
	system ( "pause" );
	return 0;
}
