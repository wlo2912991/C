#include<stdio.h>
#include<math.h>

int max(int,int);

int main(){
	int a,b,c;
	printf("��J�Ʀr:\n");
	scanf("%d",&a);
	printf("��J�Ʀr:\n");
	scanf("%d",&b);
	printf("MAX:%d",max(a,b)); 
	return 0;
}



int max(int a,int b){
	int c;
	if(a>=b){
		return a;
}
	else{
		return b;
	}
   return c;
}
