#include<stdio.h>
#include <stdlib.h>

int main(){
	int start,end;
	printf("輸入起點終點\n");
	scanf("%d%d",&start,&end);
	for(start;start<end;start++){
		printf("%d\n",start);
	}
	return 0;
}
