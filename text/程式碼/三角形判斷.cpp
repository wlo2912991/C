#include<stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(){
	int a,b,c;
	printf("第一個邊長:\n");
	scanf("%d",&a);
	printf("第二個邊長:\n");
	scanf("%d",&b);
	printf("第三個邊長:\n");
	scanf("%d",&c);
	
	if(a==b && b==c){
		printf("此為正三角形");
	}
	if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b){
		printf("此為直角三角形");
	}
		if(a+b>=c && a==b && !(b==c) || c+b>=a && c==b && !(b==a) || c+a>=b && c==a && !(a==b) ){
		printf("此為等腰三角形"); 
	}
	system ( "pause" );
	return 0;
}
