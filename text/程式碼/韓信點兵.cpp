#include<stdio.h>
#include <stdlib.h>

int main(){
	int max,a,b;
	printf("enter max:\n");
	scanf("%d",&max);
	
	for(a=0;a<=max;a++){
		if(a %3 ==2 && a%5 ==3 && a%7==2)
		b=a;
	}
	printf("%d\n",b);
	return 0;
}
