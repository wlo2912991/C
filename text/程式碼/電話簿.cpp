#include<stdio.h>
#include<stdlib.h>

struct person{
	char name[20];
	char phone[15];
};

void menu(); 
void adde();


int main(){
	printf("歡迎使用電話簿\n 作者:瑄\n");
	menu();
	printf("感謝您的使用\n");	
} 
 
void menu(){    /* 菜單 */ 
	int a,b=1;
	while(b){
	printf("輸入 1 添加聯絡人 \n");
	printf("輸入 2 刪除聯絡人 \n");
	printf("輸入 3 添加聯絡人 \n");
	printf("輸入 4 添加聯絡人 \n");
	printf("輸入 5 添加聯絡人 \n");
	printf("輸入 9 離開 \n");
	scanf("%d",&a);
	switch (a){
		case 1 : 
			printf("您輸入的是 添加聯絡人:\n");
			adde();
			break;
		case 2 : 
			printf("您輸入的是 刪除聯絡人:\n");
			break;
		case 3 : 
			printf("您輸入的是 添加聯絡人:\n");
			break;
		case 4 : 
			printf("您輸入的是 添加聯絡人:\n");
			break;
		case 5 : 
			printf("您輸入的是 添加聯絡人:\n");
			break;
		case 9 : 
			printf("您輸入的是 離開:\n");
			
			b=0;
			;}
	}
}

void adde(){ /* 添加聯絡人 */
	struct person temp;
	printf("請輸入聯絡人資料\n");
	printf("輸入聯絡人姓名:\n");
	scanf("%s",temp.name);
	printf("輸入聯絡人電話號碼:\n");
	scanf("%s",temp.phone);
	
	puts(temp.name);
	puts(temp.phone);
}
