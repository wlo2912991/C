#include<stdio.h>
#include <stdlib.h>

int main(){
	int max,a,n=0;
	printf("enter max:\n");
	scanf("%d",&max);
	
	for(a=1;a<=max;a++){
		if(a %3 ==2 && a%5 ==3 && a%7==2){
		printf("%d ",a);
		++n;
		
		if (n==3){
		break; 
	}	}	}
	return 0;
}
