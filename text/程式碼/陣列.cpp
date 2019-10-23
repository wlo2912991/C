
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
 int a[9] = { 0 };
 srand(time(0));
 for (int b = 1; b <= 6000; ++b) {
  int c=(rand()%6)+1;
  switch (c) {
  case 1:
   a[1] += 1;
    break;
  case 2:
   a[2]+=1;
   break;
  case 3:
   a[3] += 1;
   break;
  case 4:
   a[4]+=1;
   break;
  case 5:
   a[5] += 1;
   break;
  case 6:
   a[6] += 1;
   break;
  }

 }
 for (int b = 1; b <= 6; ++b) {
  printf("%d=%d¦¸\n",b,a[b]);
 }
 system("pause");
}
