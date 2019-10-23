#include<stdio.h>
#include <stdlib.h>
#include <math.h> 
int main(){
	char ar;
	int b,c;
	float d;
	printf("輸入四則運算:\n");
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
