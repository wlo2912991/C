#include<stdio.h>
#include<math.h>

int max(int,int);

int main(){
	int a,b,c;
	printf("輸入數字:\n");
	scanf("%d",&a);
	printf("輸入數字:\n");
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
