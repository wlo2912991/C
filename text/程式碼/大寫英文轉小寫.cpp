#include<stdio.h>
int main(){
	char ch;
	printf("Please enter one English: \n" );
	scanf("%c",&ch);
	ch=ch+32;
	printf("%c\n",ch);
	return 0;
}
