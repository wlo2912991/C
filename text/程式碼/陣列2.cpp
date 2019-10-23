
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int n,c;
	printf("enter n:\n");
	scanf("%d",&n);
 int a[7] = { 0 };
 srand(time(0));
 for (int b = 1; b <= n; ++b) {
  int c=rand()%6+1;
  	a[c]++;
 }
 for (int e = 1; e <= 6; ++e) {
  printf("%d=%d¦¸\n",e,a[e]);
 }
 system("pause");
}
