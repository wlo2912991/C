#include<stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("輸入起點終點\n");
	scanf("%d%d",&a,&b);
	while (a<b){
		a++;
		printf("%d\n",a);
	}
}
