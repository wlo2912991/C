# for
```
for(起始式;條件式;更新式){程式碼}
如果條件符合 就進行更新式 再來執行程式碼
```
```
#include <stdlib.h>
int main(void)
{
   int i,sum=0;
   for(i=1;i<=10;i++)			/* 計算1+2+...+10的結果 */
      sum+=i;
   printf("1+2+3+...+10=%d\n",sum);	/* 印出sum的值 */
   
   system("pause");
   return 0;
}
```
# 題目
```
輸入兩個數字
從第一個數到第二個
```
```
印出一個
6*6的實體長方形
```
```
輸入長跟邊
印出一個空心長方形
```
## 找出錯誤
```
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,j;

   for (i=1;i<=9;i++)		/* 外層迴圈 */
   {
      for (j=1;j<=9;j++)	/* 內層迴圈 */
         printf("%d*%d=%2d  ",i,j,i*j);
      printf("\n");
   

   system("pause");
   return 0;
}
```
