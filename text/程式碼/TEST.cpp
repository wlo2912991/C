#include<stdio.h>
#include<stdlib.h>
struct person{
	char name[20];
	char phone[15];
};
void menu(); 
void add();


int main(){
	printf("�w��ϥιq��ï\n �@��:ޱ\n");
	menu();
	printf("�P�±z���ϥ�\n");	
} 
 
void menu(){    /* ��� */ 
	int a,b=1;
	while(b){
	printf("��J 1 �K�[�p���H \n");
	printf("��J 2 �R���p���H \n");
	printf("��J 3 �K�[�p���H \n");
	printf("��J 4 �K�[�p���H \n");
	printf("��J 5 �K�[�p���H \n");
	printf("��J 9 ���} \n");
	scanf("%d",&a);
	switch (a){
		case 1 : 
			printf("�z��J���O �K�[�p���H:\n");
			add();
			break;
		case 2 : 
			printf("�z��J���O �R���p���H:\n");
			break;
		case 3 : 
			printf("�z��J���O �K�[�p���H:\n");
			break;
		case 4 : 
			printf("�z��J���O �K�[�p���H:\n");
			break;
		case 5 : 
			printf("�z��J���O �K�[�p���H:\n");
			break;
		case 9 : 
			printf("�z��J���O ���}:\n");
			
			b=0;
			;}
	}
}

void add(){ /* �K�[�p���H */
	struct person;
	printf("��J�p���H���:\n");
	printf("��J�p���H�m�W:\n");
	scanf("%c", & temp.name);
	printf("��J�p���H�q�ܸ��X:\n");
	scanf("%c", & temp.phone);
	
	puts(temp.name);
	puts(temp.phone);
}
