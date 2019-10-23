#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main(){
    double a,b,c,d;
	printf("請輸入身高(cm):\n");
	scanf("%lf",&a);
	d=a/100;
	printf("請輸入體重(kg):\n");
	scanf("%lf",&b);
	a=pow(d,2);
	c=b/a;
	printf("您的BMI值為:%f\n",c);
	if(c<18.5)
		printf("您的體重過輕\n");
	else{
		if(c>=18.5 && c<24)
		printf("您的體重正常,請繼續保持\n");
		else {if(c>=24 && c<27)
		printf("您的體重過重了\n");
			else {if(c>=27 && c<30)
			printf("您已經輕度肥胖\n");
				else {if(c>=30 && c<35)
				printf("您已經中度肥胖\n");
					else{
					printf("您已經重度肥胖，該開始減肥囉\n");}}}}}
	
	system ( "pause" );
	return 0;
}
