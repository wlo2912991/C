#include<stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main(){
	srand(time(0));
	int a,b,c,d;
	c=1;
	printf("�q1~100���Ʀr\n");
	for(d=1;d<=5;d++){
	a=rand()%100+1;
	}
	while (c==1  || !(b==a)){
	printf("�q��%d��\n",c);
	c=c+1;
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
