#include<stdio.h>
#include <stdlib.h>
int main(){
	int a;
    double b;
	printf("��J���O�H��\n");
	scanf("%d",&a);
	printf("�`�H�Ƭ� %d\n",a);
	b=a*300;
	if(a>=10){
			b=b*0.8;
	}
	printf("�`���B�� %f\n",b);
	system ( "pause" );
	return 0;
}
