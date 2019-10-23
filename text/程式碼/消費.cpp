#include<stdio.h>
#include <stdlib.h>
int main(){
	int a;
    double b;
	printf("輸入消費人數\n");
	scanf("%d",&a);
	printf("總人數為 %d\n",a);
	b=a*300;
	if(a>=10){
			b=b*0.8;
	}
	printf("總金額為 %f\n",b);
	system ( "pause" );
	return 0;
}
