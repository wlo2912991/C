#include<stdio.h>

int main(){
	int a,b,n,c;
	printf("��J��:\n");
	scanf("%d",&n);
	printf("��J�e:\n");
	scanf("%d",&b);
	
	for(a=1;a<=b;++a){
		for(c=1;c<=n;++c){
			if(a==1|a==b|c==1|c==n){ 
			printf("?");
			}
			else {
			printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
