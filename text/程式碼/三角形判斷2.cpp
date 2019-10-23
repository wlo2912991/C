#include<stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(){
	int a,b,c,d;
	printf("第一個邊長:\n");
	scanf("%d",&a);
	printf("第二個邊長:\n");
	scanf("%d",&b);
	printf("第三個邊長:\n");
	scanf("%d",&c);
	
	if(b>a){
	d=a; a=b; b=d;
	}
	if(c>a){
	d=a; a=c; c=d;
	}
	if(c>b){
	d=b; b=c; c=d;
	}
	
	if(a==c)
	printf("這是正三角形\n");
	if(b+c>=a && a==b && !(a==c) || b+c>=a && b==c && !(a==c))
	printf("這是等腰三角形\n");
	if(b*b+c*c==a*a)
	printf("這是直角三角形\n");
	system ( "pause" );
	return 0;
}
