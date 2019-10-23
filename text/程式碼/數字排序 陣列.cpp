#include<stdio.h>

int main(){
	int v[6]={0};
	int a,b,t;
	for( a=0;a<6;a++){
	scanf("%d",&v[a]);     //块计 
	}
	for(a=0;a<5;a++){ 		//ユ传Ω计  
	for(b=0;b<5;b++){		//ユ传 (逼) 
		if(v[b]>v[b+1]){
			   t= v[b];
			v[b]= v[b+1];
			v[b+1]=t;
		}
	}}
	
	
	for(a=0;a<6;a++){  		//块计 
		printf("%d ",v[a]);
	}
	return 0;
}

