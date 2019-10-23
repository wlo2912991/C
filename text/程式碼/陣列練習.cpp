#include<stdio.h>

int maxv(int[],int n);

int main(){
	int a[4]={9,5,8,4};
	printf("max:%d\n",maxv(a,4));
	int b[3]={8,7,1};
	printf("max:%d\n",maxv(b,3));
	
}

int maxv(int v[],int n){
	int max=v[0],i;
	for(i=1;i<n;i++){
		if(v[i]>max)
		max=v[i];
	}
	return max;
}
