#include<stdio.h>
#include <stdlib.h>

int main(){
	int a=0,b=0;
	while (a<100){
		a=a+1;
		b=b+a;
	}	
	printf("%d\n",b);
	
}
