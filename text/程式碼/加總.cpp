#include<stdio.h> 

void a(int);
int c;

int main(){
	int n;
	printf("��J�Ʀr:\n");
	scanf("%d",&n);
	a(n);
	printf("%d\n",c);
}

void a(int i){
	if(i<=100){
		c=c+i;
		a(i+1);
	}
}
