#include<stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main(){
	srand(time(0));
	int a,b,c,d;
	c=1;
	printf("猜1~100的數字\n");
	for(d=1;d<=5;d++){
	a=rand()%100+1;
	}
	while (c==1  || !(b==a)){
	printf("猜第%d次\n",c);
	c=c+1;
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
