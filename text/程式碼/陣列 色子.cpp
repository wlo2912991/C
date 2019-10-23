#include<stdio.h>
#include<time.h>
#include<stdlib.h> 

int main(){
	int a[13]={0};
	srand(time(0));
	int b,N;
	printf("enter N:\n");
	scanf("%d",&N);
	for(b=1;b<=N;++b){
	 int d=rand()%6+1;
	 int e=rand()%6+1;
	 int f=d+e;
	 a[f]++; 
}
	for(b=2;b<=12;b++){
	printf("%d = %d¦¸\n",b,a[b]);
} 
	system ( "pause" );
	return 0;
} 
