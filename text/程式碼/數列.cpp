#include<stdio.h>

int a(int); 

int main(){
	int b;
	printf("n=");
	scanf("%d",&b);
	printf("\n%d",a(b+1));
}


int a(int n){
	if(n<=2){
	return n;
}
    return a(n-1)+a(n-2);
}
