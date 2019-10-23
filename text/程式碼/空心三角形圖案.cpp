#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("¿é¤J°ª:\n");
	scanf("%d",&a);
	for(c=0;c<a;c++){
	for(b=0;b<=c;b++){
	if(c==a||b==a||c==1||b==1){
	printf("*");
	}	
	else{
	printf(" ");
	printf("\n");
	}} 
}
	return 0;
	
	}
