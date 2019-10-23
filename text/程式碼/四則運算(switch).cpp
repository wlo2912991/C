#include<stdio.h>
#include <stdlib.h>
#include <math.h> 
int main(){
	char a;
	int b,c;
	float d;
	printf("輸入四則運算:\n");
	scanf("%d%c%d",&b,&a,&c);
	switch(a){
		case'+':
			d=b+c;
		break;
		case '-': 
			d=b-c;
		break;
		case'/': 
			d=(float)b/c;
		break;
		case'*':
			d=b*c;
		break;
	}
				
	printf("%f\n",d);
	return 0;
}
