#include<stdio.h> 

void a(int);

int main(){
	int n;
	printf("��J�Ʀr:\n");
	scanf("%d",&n);
	a(n-1);
}

void a(int i){
	if(i>=1){
		printf("%d\n",i);
		a(i-1);
	}
}
