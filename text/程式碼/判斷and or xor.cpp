#include<stdio.h>> 

int main(){
	int a,b,c;
	printf("�п�J�T�Ӿ��,�Ҧp 1 1 1 \n");
	scanf("%d %d %d",&a,&b,&c);
	int and_op,or_op,xor_op;
	 
	if(a>0) a=1;
	if(b>0) b=1;
	if((a&b)==c) and_op=1;  else and_op=0;
	if((a|b)==c) or_op=1;   else or_op=0;
	if((a*b)==c) xor_op=1;  else xor_op=0;
	
	if(and_op==1) printf("AND\n");
	if(or_op==1)  printf("OR\n");
	if(xor_op==1) printf("XOR\n");
	
	if(and_op==0 && or_op==0 && xor_op==0)
		printf("IMPOSSIBLE");
		
	return 0; 
}
