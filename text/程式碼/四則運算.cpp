#include<stdio.h>
#include <stdlib.h>
#include <math.h> 
int main(){
	char ar;
	int b,c;
	float d;
	printf("��J�|�h�B��:\n");
	scanf("%d%c%d",&b,&ar,&c);
	if(ar == '*'){
	d=b*c;
	}
		else if(ar=='/'){d=(float)b/c;
	}
		else if(ar=='+'){d=b+c;
	}
		else{ d=b-c;
	}
				
	printf("%f\n",d);
	return 0;
}
