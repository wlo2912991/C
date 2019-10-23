#include<stdio.h>

int main(){
	int a,b,n;
	printf("¿é¤J¼Æ¦r:\n");
	scanf("%d",&n);
	n=n-1;
	for(a=0;a<=n;++a){
		for(b=0;b<=n;++b){
			if(a+b>=n){
				printf("*"); 
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}
