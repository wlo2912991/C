#include<stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("��J�Ʀr:\n");
	scanf("%d",&a);
	for(b=1;b<a;b++){
		if(a%b == 0)
		printf("%d ",b);
	}
	return 0;
}
