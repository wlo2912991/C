#include<stdio.h>

int f(int);

int main(){
	int a;
	scanf("%d",&a);
	printf("%d",f(a));
	return 0;
}

int f(int x){
	return x/2;
}
