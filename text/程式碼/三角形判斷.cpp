#include<stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(){
	int a,b,c;
	printf("�Ĥ@�����:\n");
	scanf("%d",&a);
	printf("�ĤG�����:\n");
	scanf("%d",&b);
	printf("�ĤT�����:\n");
	scanf("%d",&c);
	
	if(a==b && b==c){
		printf("�������T����");
	}
	if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b){
		printf("���������T����");
	}
		if(a+b>=c && a==b && !(b==c) || c+b>=a && c==b && !(b==a) || c+a>=b && c==a && !(a==b) ){
		printf("�������y�T����"); 
	}
	system ( "pause" );
	return 0;
}
