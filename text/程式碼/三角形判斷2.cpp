#include<stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(){
	int a,b,c,d;
	printf("�Ĥ@�����:\n");
	scanf("%d",&a);
	printf("�ĤG�����:\n");
	scanf("%d",&b);
	printf("�ĤT�����:\n");
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
	printf("�o�O���T����\n");
	if(b+c>=a && a==b && !(a==c) || b+c>=a && b==c && !(a==c))
	printf("�o�O���y�T����\n");
	if(b*b+c*c==a*a)
	printf("�o�O�����T����\n");
	system ( "pause" );
	return 0;
}
