#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main(){
    double a,b,c,d;
	printf("�п�J����(cm):\n");
	scanf("%lf",&a);
	d=a/100;
	printf("�п�J�魫(kg):\n");
	scanf("%lf",&b);
	a=pow(d,2);
	c=b/a;
	printf("�z��BMI�Ȭ�:%f\n",c);
	if(c<18.5)
		printf("�z���魫�L��\n");
	else{
		if(c>=18.5 && c<24)
		printf("�z���魫���`,���~��O��\n");
		else {if(c>=24 && c<27)
		printf("�z���魫�L���F\n");
			else {if(c>=27 && c<30)
			printf("�z�w�g���תέD\n");
				else {if(c>=30 && c<35)
				printf("�z�w�g���תέD\n");
					else{
					printf("�z�w�g���תέD�A�Ӷ}�l����o\n");}}}}}
	
	system ( "pause" );
	return 0;
}
