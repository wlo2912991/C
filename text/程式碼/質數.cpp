#include<stdio.h>

int main( ){
	int a,b,c;
	printf("N:\n");
	scanf("%d",&a);
	for(b=2,c=0;b<a;b++){
		if(a%b==0){
		c++;
	}}
	if(c==0)
	printf("YES");
	else
	printf("NO");
} 
