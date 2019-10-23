#include<stdio.h> 

void a(int);

int main(){
	a(3);
}

void a(int i){
	if(i>=1){
		printf("%d\n",i);
		a(i-1);
	}
}
