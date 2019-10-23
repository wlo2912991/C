# while
```
while(條件式){
    程式碼
}

do{程式碼}
while(條件)
不管條件成不成立 程式碼至少會執行一次
```
```
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=1,sum=0;	/* 設定迴圈初值 */
   while(sum<=100)    /* while迴圈，當sum小於100則繼續累加 */
   {
      sum+=i;
      printf("從1累加到%2d=%2d\n",i,sum);
      i++;
   }
   printf("必須累加到%d\n",i-1);
   system("pause");
   return 0;
}
```
```
int main(void)
{
   int n,i=1,fact=1;		/* 設定迴圈初值 */
   do
   {
      printf("請輸入n值 (n>0): ");
      scanf("%d",&n);
   }
   while (n<=0);			/* 當n<=0時重複輸入n的值 */

   do
      fact*=i++;
   while (i <= n);		/* 當i<=n時執行累乘的動作 */
   printf("%d!=%d\n",n,fact);
   
   system("pause");
   return 0;
```
# 題目
```
做出一個無窮迴圈
```
```
設定一個數字
讓使用者輸入一個數字
使用者輸入的數字小於設定數字時
輸出太小
大於設定數字時
輸出太大
與設定數字一樣時
結束
```
```
讓使用者輸入數字
輸入0時結束
並輸出使用者剛剛輸入數字之和
```
