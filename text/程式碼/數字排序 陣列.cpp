#include<stdio.h>

int main(){
	int v[6]={0};
	int a,b,t;
	for( a=0;a<6;a++){
	scanf("%d",&v[a]);     //��J�Ʀr 
	}
	for(a=0;a<5;a++){ 		//�洫����  
	for(b=0;b<5;b++){		//�洫 (�Ƨ�) 
		if(v[b]>v[b+1]){
			   t= v[b];
			v[b]= v[b+1];
			v[b+1]=t;
		}
	}}
	
	
	for(a=0;a<6;a++){  		//��X�Ʀr 
		printf("%d ",v[a]);
	}
	return 0;
}

