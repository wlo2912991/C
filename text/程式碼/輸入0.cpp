#include<stdio.h>
#include <stdlib.h>
  
int main(){
	int a,b,c;
	a=1,b=0,c=0;
	printf("輸入數字(離開輸入0)\n");
	while(!(a==0)){
	scanf("%d",&b);
	c=c+b;a=b;
	}	
	printf("%d",c);
	system ( "pause" );
	return 0;
}	
